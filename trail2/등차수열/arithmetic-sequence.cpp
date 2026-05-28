#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int mx = 0;
    for (int i = 1; i <= 100; i++) {
        int cnt = 0;

        for (int j = 0; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                if(v[j] - i == i - v[k]) cnt++;
            }
        }

        mx = max(cnt, mx);
    }

    cout << mx;
    // Please write your code here.
    return 0;
}