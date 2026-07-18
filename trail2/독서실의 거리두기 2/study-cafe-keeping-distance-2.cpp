#include <iostream>
#include <vector>
#include <string>
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
        s[i] = '1';

        int prev = -1;
        int min_d = 10000000;
        for (int j = 0; j < n; j++) {
            if (s[j] == '1') {
                
                if(prev != -1) {
                    min_d = min(min_d, j - prev);
                }
                
                prev = j;
            } 
        }

        mx = max(mx, min_d);
        s[i] = '0';
    }

    cout << mx;
    
    // Please write your code here.
    return 0;
}