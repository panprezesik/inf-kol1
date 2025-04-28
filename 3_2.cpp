// Taki sam program, jak wyżej, ale zamiast przekątnej z jedynkami: obramowanie tablicy
// (pierwszy wiersz, ostatni wiersz, pierwsza kolumna, ostatnia kolumna) są wypełnione
// jedynkami. Reszta wypełniona zerami.

#include <iostream>
using namespace std;

int main(){
    int n;
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
        t[0][i] = 1;
        t[2*n-2][i] = 1;
        t[i][0] = 1;
        t[i][2*n-2] = 1;
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