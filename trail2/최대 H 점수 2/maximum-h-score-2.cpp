#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> v(n);

    for(int& x : v) {
        cin >> x;
    }    

    

    for (int i = n; i >= 0; i--) {
        int cnt = 0;
        int pluscnt = 0;
        for (int j = 0; j < n; j++) {
            if (v[j] >= i) cnt++;
            if (v[j] + 1 == i) pluscnt++;
        }

        if (cnt + pluscnt >= i && i - cnt <= l) {
            cout << i;
            return 0;
        }
    }

    // Please write your code here.
    return 0;
}