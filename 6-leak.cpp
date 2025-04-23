// 6 = 0110
// 5 = 0101
// 11 = 0011 = 2

// 20 = 0001 0100
// 15 = 0000 1111
// 33 = 00011011 = 4
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int l1, l2, r = 0, i = 0;
    cin >> l1;
    cin >> l2;
    do {
        if ((l1 ^ l2) & 1){
            r++;
        }
        l1 = (l1 >> 1);
        l2 = (l2 >> 1);
        i++;
    } while(i != 32);
    cout << r;
}