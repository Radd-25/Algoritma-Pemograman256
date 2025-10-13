#include <iostream>
using namespace std;
int main() {
    const float PI = 3.14159;
    float r;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    float luas = PI * r * r;
    cout << "Luas lingkaran: " << luas << endl;
    return 0;
}
