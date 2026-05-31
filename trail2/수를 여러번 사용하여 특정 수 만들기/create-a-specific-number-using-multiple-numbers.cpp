#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int i = 0;

    int mx = 0;
    
    while(a * i <= c) {
        int x = a * i;
        int j = 0;
        while(x + b * j <= c) {

            int y = x + b * j;

            
            if (mx < y) {
                mx = y;
            }
            j++;


        }


        i++;
    }

    cout << mx;
    // Please write your code here.
    return 0;
}