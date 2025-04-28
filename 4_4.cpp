// Napisz program, który liczy ile razy w reprezentacji bitowej liczby całkowitej podanej przez
// użytkownika wystąpi sekwencja “101”. Np. w podanej liczbie: 0000…001101011101,
// sekwencja “101” występuje 3 razy

#include <iostream>
using namespace std;

int main(){
    int liczba, licznik = 0;
    cin >> liczba;
    for(int i = 0; i < 30; i++){
        if((liczba >> i) & 1){
            if((~liczba >> i+1) & 1){
                if((liczba >> i+2) & 1){
                    licznik++;
                }
            }
        }
    }
    cout << licznik;
}