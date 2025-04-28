// Wczytaj 4 liczby (a, b, c, d) typu rzeczywistego. Napisz program, który obliczy a/b + c/d. Wynik
// wypisz na ekran. W przypadku, kiedy nie można obliczyć wyniku, wyświetli stosowny
// komunikat.

#include <iostream>
using namespace std;

int main(){
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b == 0 || d == 0){
        cout << "Niepoprawne dane wejsciowe";
        return 0;
    }
    
    cout << a/b + c/d;
}