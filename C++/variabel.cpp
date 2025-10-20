#include <iostream>
#include <string>
using namespace std;

int main() {
    short a;
    int b;
    long c;
    float d;
    double e;
    char data_karakter = 'A';
    bool f = true;

    a = 10000;
    b = 100000;
    c = 1000000000;
    d = 3.12;
    e = 3.12345;
    f = false;

    cout << "variabel a: " << a << endl;
    cout << "variabel b: " << b << endl;
    cout << "variabel c: " << c << endl;
    cout << "variabel d: " << d << endl;
    cout << "variabel e: " << e << endl;
    cout << "variabel karakter: " << data_karakter << endl;
    cout << "variabel boolean: " << f << endl;

    return 0;
}