// Napisz program, który znajduje dwa skrajne zera w binarnej reprezentacji liczby dziesiętnej
// podawanej przez użytkownika (pierwsze zero z prawej i pierwsze po lewej stronie) i liczy
// wszystkie jedynki, które wystąpią między tymi zerami.

#include <iostream>
using namespace std;

int main()
{
    int liczba, lewo, prawo, licznik = 0;
    cin >> liczba;
    
    for(int i = 0; i < 32; i++){
        if((~liczba >> i) & 1){
            prawo = i;
            break;
        }
    }
    for(int i = 31; i >= 0; i--){
        if((~liczba >> i) & 1);{
            lewo = i;
            break;
        }
    }
    for(int i = lewo; i >= prawo; i--){
        if((liczba >> i) & 1){
            licznik++;
        }
    }
    cout << licznik;
    return 0;
}