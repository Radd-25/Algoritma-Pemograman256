#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> NimtoDigit(long long nim) {
    vector<int> digits;
    string nim_str = to_string(nim); 

    for (char c : nim_str) {
        digits.push_back(c - '0');
    }
    return digits;
}

void printVector(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i] << (i == arr.size() - 1 ? "" : ", ");
    }
    cout << "]";
}


int main() {
    string nim_input;
    cout << "Masukan NIM: ";
    cin >> nim_input;

    vector<int> digits = NimtoDigit(stoll(nim_input));

    cout << "Array Digit: ";
    printVector(digits);
    cout << endl;

    size_t arraySize = digits.size(); 
    
    if (arraySize == 0) {
        cout << "NIM tidak valid atau kosong." << endl;
        return 0; 
    }
    
    int totalValue = 0;
    for (int digit : digits) {
        totalValue += digit; 
    }
    
    int max_val = digits[0];
    for (size_t i = 1; i < arraySize; i++) {
        if (digits[i] > max_val) {
            max_val = digits[i];
        }
    }
    
    int min_val = digits[0];
    for (size_t i = 1; i < arraySize; i++) {
        if (digits[i] < min_val) {
            min_val = digits[i];
        }
    }
    
    double average = (double)totalValue / arraySize;

    vector<int> reversedArray = digits; 
    reverse(reversedArray.begin(), reversedArray.end()); 
    
    cout << "-------------------------" << endl;
    cout << "Total Nilai: " << totalValue << endl;
    cout << "Nilai Max: " << max_val << endl;
    cout << "Nilai Min: " << min_val << endl;
    cout << "Rata-rata: " << average << endl;
    
    cout << "Array Terbalik: ";
    printVector(reversedArray); 
    cout << endl;
    
    return 0;
}