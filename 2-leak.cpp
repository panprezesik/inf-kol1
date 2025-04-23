// Ania Bartek Cezary Darek Ewa Ela Filip Karol Marcin Zosia
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string t[10];
    bool r[10];
    for(int i = 0; i < 10; i++){
        cin >> t[i];
    }
    char l;
    cin >> l;
    int h = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < t[i].length(); j++){
            if(l == t[i][j]){
                h++;
                r[i] = true;
            }
        }
    }
    cout << h << endl;
    for(int i = 0; i < 10; i++){
        if(r[i] == false){
            cout << "NIE";
            return 0;
        }
    }
    cout << "TAK";
    return 0;
}