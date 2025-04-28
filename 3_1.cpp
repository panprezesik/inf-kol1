// Napisz program, który wyświetla tablicę dwuwymiarową o wymiarach (2*n-1) x (2*n-1), gdzie n
// podaje użytkownik. Wypełnij ją najpierw zerami, następnie wpisz jedynki na przekątnej tablicy.
// Pamiętaj o tym, że tablica tworzona jest dla stałych rozmiarów. Przyjmij maksymalny rozmiar
// tablicy 13*13. Użytkownik nie może zatem podać n większego od 7. Wyświetl tablicę (a
// właściwie jej fragment o rozmiarach (2*n-1)*(2*n-1))

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
        t[i][i] = 1;
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