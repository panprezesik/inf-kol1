// Wczytaj n (n<100) CYFR (liczby całkowite od 0 do 9) i zapisz je po kolei do wektora o
// rozmiarze 100. Program przegląda pierwsze n wartości tablicy i tworzy na tej podstawie
// histogram - tablica o rozmiarze 10, która przechowuje liczbę wystąpień każdej z cyfr.
#include <iostream>
using namespace std;

int main(){
    int n, l, i = 0, w[100], t[10];
    cin >> n;
    if (n < 0 || n >= 100){
        cout << "Niepoprawne dane wejsciowe";
        return 0;
    }
    while(i < n){
        cin >> l;
        if(l >= 0 && l < 10) {
            w[i] = l;
            i++;
        } else {
            cout << "Niepoprawne dane wejsciowe" << endl;
        }
    }
    for(int j = 0; j < 10; j++){
        t[j] = 0;
    }
    for(int j = 0; j < n; j++){
        t[w[j]] = t[w[j]] + 1;
    }
    cout << "[ ";
    for(int j = 0; j < 10; j++){
        cout << t[j];
        if(j < 9){
            cout << " ";
        }
    }
    cout << " ]";
}
