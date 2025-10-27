#include <iostream>
using namespace std;

int main (){
    int a, b;

    cout << "Masukan angka pertama : ";
    cin >> a;
    cout << "Masukan angka kedua    : ";
    cin >> b;

    if (a > b) {
        cout << a << " lebih besar dari " << b << endl;
    } else if (a < b) {
        cout << a << " lebih kecil dari " << b << endl;
    } else {
        cout << a << " sama dengan " << b << endl;
    }

    return 0;
}
