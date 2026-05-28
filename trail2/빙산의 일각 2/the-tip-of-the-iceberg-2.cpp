#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);

    int maxH = 0;
    for (int i =0; i < n;i++) {
        cin >> v[i];
        maxH = max(v[i], maxH);
    }

    int mx = 0;
    for (int i = 0; i <= maxH; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if(v[j] - i > 0 && v[j + 1] - i <= 0) cnt++; 
        }
        mx = max(cnt, mx);
    }

    cout << mx;
    // Please write your code here.
    return 0;
}