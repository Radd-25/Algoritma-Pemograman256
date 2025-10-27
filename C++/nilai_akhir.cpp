#include <iostream>
using namespace std;

int main (){
    float tugas, uts, uas, nilai_akhir;

    cout << "masukan nilai tugas: ";
    cin >> tugas;
    cout << "masukan nilai uts: ";
    cin >> uts;
    cout << "masukan nilai uas: ";
    cin >> uas;

    nilai_akhir = (0.3 * tugas) + (0.3 * uts) + (0.4 * uas);
    cout << "nilai akhir: " << nilai_akhir << endl;

    if (nilai_akhir >=60)
    {
        cout << "Status : Lulus" << endl;
    }
    else
    {
        cout << "Status : Tidak Lulus" << endl;
    }

    return 0;
}