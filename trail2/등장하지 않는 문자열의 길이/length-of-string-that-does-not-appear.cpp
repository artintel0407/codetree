#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int flag;
    for (int i = 1; i <= n; i++) {
        flag = true;
        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (s.substr(j, i) == s.substr(k, i)) flag = false;
                
            }
        }
        if (flag) {
            cout << i;
            return 0;
        }
    }
}