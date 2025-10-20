#include <iostream>
#include <string>
using namespace std;

int main() {
    char a[30] = "---BELAJAR TIPE DATA---";
    short b;
    int c;
    long d;
    float e;
    double f;
    int g = 1;
    int h = 2;

    b = 10000;
    c = 100000;
    d = 1000000000;
    e = 3.12;
    f = 3.12345;

    cout << a << endl;
    cout << "Tipe nilai Nilai short: " << b << endl;
    cout << "Tipe nilai Nilai int: " << c << endl;
    cout << "Tipe nilai Nilai long: " << d << endl;
    cout << "Tipe nilai Nilai float: " << e << endl;
    cout << "Tipe nilai Nilai double: " << f << endl;
    cout << "Tipe nilai Nilai g + h: " << g + h << endl;
    cout << endl;

    cout << "berikut hasil boolean :" << endl;
    cout << "g > h : " << (g > h) << endl;
    cout << "g < h : " << (g < h) << endl;
    cout << "g >= h : " << (g >= h) << endl;
    cout << "g <= h : " << (g <= h) << endl;
    cout << "g == h : " << (g == h) << endl;
    cout << "g != h : " << (g != h) << endl;
    return 0;
}