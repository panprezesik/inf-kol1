// Napisz program, który wczytuje podaną przez użytkownika liczbę i następnie zamienia
// wszystkie bity tej liczby na przeciwne. Następnie program wyświetla reprezentację binarną
// takiej liczby wynikowej oraz jej reprezentację dziesiętną.
// Np. na wejściu: 0000….01101 -> po zamianie bitów: 1111…10010 dziesiętnie: -14
#include <iostream>
using namespace std;

int main() {
    int liczba;
    cin >> liczba;
    cout << (~liczba);
}