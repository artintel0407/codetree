#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int mx = b[0];

    for (int i = 1; i <= mx; i++) {
        int x = i * 2;
        bool flag = true;
        for (int j = 0; j < n; j++) {
            if (x < a[j] || x > b[j]) {
                flag = false;
            }
            x *= 2;
        }

        if (flag) {
            cout << i;
            return 0;
            
        }
        
    }

    // Please write your code here.
    return 0;
}