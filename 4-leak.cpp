#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t[5][5], n;
    cin >> n;
    if (n > 5 || n < 0){
        cout << "Niepoprawne dane wejsciowe";
        return 0;
    }
    for(int w = 0; w < n; w++){
        for(int k = 0; k < n; k++){
            cin >> t[w][k];
        }
    }
    int max1 = t[0][0], max2 = t[0][0];
    for(int w = 0; w < n; w++){
        for(int k = 0; k < n; k++){
            if(t[w][k] > max1){
                max2 = max1;
                max1 = t[w][k];
            }
        }
    }
    cout << "MAX 1 = " << max1 << ", MAX2 = " << max2;
}