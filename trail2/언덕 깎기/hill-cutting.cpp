#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int& x : v) {
        cin >> x;
    }


    int mn = 10000000;

    for (int i =0 ; i<= 100; i++) {
        int cost = 0;
        for (int j = 0; j < n; j++) {
            

            if (v[j] <= i) {
                cost += pow(i-v[j], 2);
            }
            else if (v[j] >= i + 17) {
                cost += pow(v[j] - i - 17, 2);
            }
        }
        

        mn = min(cost, mn);
    }

    cout << mn;
    // Please write your code here.
    return 0;
}