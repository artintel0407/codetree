#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x == 1) cout << 1;
    else if (x == 2) cout << 2;
    else if (x == 3) cout << 3;
    else {
        int n = 2;

        while(n * n < x) {
            n++;
        }

        if (n * n - x < n) {
            cout << 2 * n - 1;
        }
        else {
            cout << 2 * n - 2;
        }
    }
    // Please write your code here.
    return 0;
}