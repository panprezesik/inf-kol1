// Wczytaj dwie liczby. Sprawdź czy pierwsza jest podzielna przez drugą. Wyświetl odpowiedni
// komunikat.

#include <iostream>
using namespace std;

int main(){
    int l1, l2;
    cin >> l1 >> l2;
    if(l1 % l2 == 0){
        cout << "TAK";
    } else {
        cout << "NIE";
    }
}