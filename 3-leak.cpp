#include <iostream>
using namespace std;

int main()
{
    int t[5][5], n;
    cin >> n;
    if (n > 5 || n < 0){
        cout << "Niepoprawne dane wejściowe";
        return 0;
    }
    for(int w = 0; w < n; w++){
        for(int k = 0; k < n; k++){
            if(k <= w){
                t[w][k] = (w+1)*(k+1);
            } else {
                t[w][k] = 0;
            }
        }
    }
    
    for(int w = 0; w < n; w++){
        for(int k = 0; k < n; k++){
            cout << t[w][k];
            if(k < n){
                cout << " ";
            }
        }
        if(w < n){
            cout << endl;
        }
    }
    
    return 0;
}