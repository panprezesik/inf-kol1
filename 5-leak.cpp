// Ala_ma_kota <- należy wpisać z podłogami, żeby każdy z wyrazów nie był liczony jako osobny argument.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string z;
    cin >> z;
    char l;
    cin >> l;
    int k = 0;
    for(int i = 0; i < z.length(); i++){
        if(l == z[i]){
            k++;
        }
    }
    cout << k;
}