// Wczytaj zmienną typu char. Użyj switcha, który rozpoznaje cztery wartości wczytanej
// zmiennej: "a", "b", "c" lub "d". W zależności od podanego znaku, program powinien policzyć
// odpowiednie pole: a- pole kwadratu, b- pole prostokąta, c- pole trójkąta, d - pole trapezu

#include <iostream>
using namespace std;

int main(){
    char z;
    int a, b, h;
    cin >> z;
    switch(z){
        case 'a':
            cin >> a;
            cout << a*a;
            break;
        case 'b':
            cin >> a >> b;
            cout << a*b;
            break;
        case 'c':
            cin >> a >> h;
            cout << (a*h)/2;
            break;
        case 'd':
            cin >> a >> b >> h;
            cout << ((a+b)*h)/2;
            break;
        default:
            cout << "Niepoprawne dane wejsciowe";
    }
}