#include <iostream> // 33분 시작
#include <vector>
#include <climits>
#include <algorithm> // 43분 이해 완료
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);


    for (int& x : v) {
        cin >> x;
    }

    sort(v.begin(), v.end());
    
    int max_minus = INT_MIN;
    int max_minus_idx = -1;
    int min_plus = INT_MAX;
    int min_plus_idx = -1;
    int zero_idx = -1;

    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            if (max_minus < v[i]) {
                max_minus = v[i];
                max_minus_idx = i;
            }
        }
        else if (v[i] == 0) {
            zero_idx = i;
        }
        else {
            if (min_plus > v[i]) {
                min_plus = v[i];
                min_plus_idx = i;
            }
        }
    }

    int ans = INT_MIN;
    
    if (zero_idx != -1) {
        ans = max(ans, 0);
    }

    ans = max(ans, v[n - 1] * v[n - 2] * v[n - 3]);

    ans = max(ans, v[0] * v[1] * v[n - 1]);

    if (min_plus_idx != -1 && min_plus_idx + 1 < n && max_minus_idx != -1) {
        ans = max(ans, v[min_plus_idx] * v[min_plus_idx + 1] * v[max_minus_idx]);
    }

    if (max_minus_idx != -1 && max_minus_idx - 2 >= 0) {
        ans = max(ans, v[max_minus_idx] * v[max_minus_idx - 1] * v[max_minus_idx - 2]);
    }

    cout << ans;
    
    // Please write your code here.
    return 0;
}