#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n + 1);


    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int mx = 0;
    for (int i  = 1; i <= n; i++) {
        int sum = 0;
        int pre = v[i];
        for (int j = 0; j < m; j++) {
            sum += pre;
            pre = v[pre];
        }

        mx = max(sum, mx);
    }

    cout << mx;
    // Please write your code here.
    return 0;
}