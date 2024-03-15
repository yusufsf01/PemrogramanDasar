#include <iostream>

using namespace std;

int main ()
{
    int angka, jumlah=0 ;
    cout << "masukan angka : " ;
    cin >> angka ;
    while (angka > 0)
    {
        jumlah++ ;
        angka = angka/10;
    }
    cout << "\nJumlah digit = " << jumlah;
    cout << endl;
    return 0;
}