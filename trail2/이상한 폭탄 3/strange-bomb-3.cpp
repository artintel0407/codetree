#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> v(n);


    for (int& x : v) {
        cin >> x;
    }

    int mx = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int start = v[i];
        int idx = i;
        int cnt = 0;
        vector<bool> bomb(n, false);
        for (int j = i + 1; j < n; j++) {
            if(start == v[j]) {
                if(j - idx <= k) {
                    bomb[j] = true;
                    cnt++;

                    if(!bomb[idx]) {
                        cnt++;
                    }
                }
                idx = j;
            }
        }
        
        if (mx < cnt) {
            mx = cnt;
            res = start;
        }
        else if (mx == cnt && cnt != 0) {
            
            res = max(start, res);
        }
    }

    
    cout << res;
    // Please write your code here.
    return 0;
}