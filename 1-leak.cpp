#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t[5];
    int i = 0, l, l2;
    while (i < 5) {
        cin >> l;
        l2 = (l >> i);
        if (l2 & 1){
            t[i] = l;
            i++;
        }
    }
    for(int j = 0; j < 5; j++){
        cout << t[j];
        if (j < 5){
            cout << " ";
        }
    }
    return 0;
}