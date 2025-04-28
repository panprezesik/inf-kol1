// Taki sam program, jak wyżej, ale zamiast obramowania z jedynkami: szachownica - tzn.
// jedynki są na zmianę z zerami. Wypełnianie tablicy też w funkcji.

#include <iostream>
using namespace std;

int main(){
    int n, licznik = 2;
    int t[13][13];
    cin >> n;
    if(n < 0 || n > 7){
        cout << "Niepoprawne dane wejsciowe";
        return 0;
    }
    for(int i = 0; i < 2*n-1; i++){
        for(int j = 0; j < 2*n-1; j++){
            t[i][j] = 0;
        }
    }
    for(int i = 0; i < 2*n-1; i++){
        for(int j = 0; j < 2*n-1; j++){
            t[i][j] = licznik % 2;
            licznik ++;
        }
    }
    for(int i = 0; i < 2*n-1; i++){
        for(int j = 0; j < 2*n-1; j++){
            cout << t[i][j];
            if(j < 2*n-1){
                cout << " ";
            }
        }
        if(i < 2*n-1){
            cout << endl;
        }
    }
}