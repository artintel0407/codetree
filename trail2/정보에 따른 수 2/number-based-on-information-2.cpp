#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b;
    cin >> a >> b;

    vector<int> n;
    vector<int> s;

    while(t--) {
        string cmd;
        int x;
        cin >> cmd >> x;
        if (cmd == "S") {
            s.push_back(x);
        }
        else {
            n.push_back(x);
        }
    }
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        int d1 = 10000;
        int d2 = 10000;

        for (int j = 0; j < s.size(); j++) {
            d1 = min(abs(s[j] - i), d1);
        }
        for (int j = 0; j < n.size(); j++) {
            d2 = min(abs(n[j] - i), d2);
        }

        if(d1 <= d2) cnt++;
    }

    cout << cnt;
    // Please write your code here.
    return 0;
}