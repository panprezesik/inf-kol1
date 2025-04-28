// Wczytaj 3 liczby. Wyświetl największą z nich. Nie używaj pętli. Spróbuj to zrobić z jak
// najmniejszą liczbą porównań. Wartość największej liczby wyświetlana jest w programie
// głównym

#include <iostream>
using namespace std;

int main(){
    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;
    if(l1 > l2 && l1 > l3){
        cout << l1;
    } else if(l2 > l1 && l2 > l3){
        cout << l2;
    } else {
        cout << l3;
    }
}