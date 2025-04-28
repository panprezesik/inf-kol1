// Napisz program, który liczy ile jedynek i ile zer wystąpiło w liczbie całkowitej podawanej na
// wejściu przez użytkownika.
#include <iostream>
using namespace std;

int main(){
    int liczba, jedynki = 0;
    cin >> liczba;
    for(int i = 31; i >= 0; i--){
        if((liczba >> i) & 1){
            jedynki++;
        }
    }
    cout << "Liczba 1 = " << jedynki << endl;
    cout << "Liczba 0 = " << 32 - jedynki << endl;
}