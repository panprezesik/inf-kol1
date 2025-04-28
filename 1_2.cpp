// Sprawdź czy wprowadzona przez użytkownika liczba jest parzysta. Wyświetl odpowiedni
// komunikat.

#include <iostream>
using namespace std;

int main(){
    int l;
    cin >> l;
    if (l%2 == 0){
        cout << "Parzysta";
    } else {
        cout << "Nieparzysta";
    }
}