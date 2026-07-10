#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);



    int low = 100000;
    int high = 0;
    for (int& x : v) {
        cin >> x;
        low = min(low, x);
        high = max(high, x);
    }

    int mn = 10000000;
    for (int i = low; i <= high; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (v[j] - i - k > 0) sum += v[j] - i - k;
            else if (v[j] - i < 0) sum += i - v[j];  
        }

        mn = min(mn, sum);
    }

    cout << mn;

    // Please write your code here.
    return 0;
}