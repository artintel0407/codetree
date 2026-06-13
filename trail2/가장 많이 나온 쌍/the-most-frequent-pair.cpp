#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[11][11]{};
    for (int i = 0; i < m; i++) {
        vector<int> v(2);
        cin >> v[0] >> v[1];

        sort(v.begin(), v.end());

        arr[v[0]][v[1]]++;
    }

    int mx = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            mx = max(arr[i][j], mx);
        }
    }

    cout << mx;
    // Please write your code here.
    return 0;
}