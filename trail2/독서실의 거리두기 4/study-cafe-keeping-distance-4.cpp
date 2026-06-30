#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;


    int mx = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') continue;
        for (int j = i + 1; j < n; j++) {
            if (s[j] == '1') continue;

            s[i] = '1';
            s[j] = '1';

            int pre = -1;
            int min_dist = 1000000;
            for (int k = 0; k < n; k++) {
                if (s[k] == '1' && pre != -1) {
                    min_dist = min(min_dist, k - pre);
                } 

                if (s[k] == '1') {
                    pre = k;
                }
            }


            mx = max(mx, min_dist);
            s[i] = '0';
            s[j] = '0';
        }
    }    
    cout << mx;
    // Please write your code here.
    return 0;
}