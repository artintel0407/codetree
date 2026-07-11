#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0;i < n;i++) {
        int left = 0;
        int right = 100;
        for (int j = 0;j <n;j++) {
            if (i == j) continue;

            left = max(left, x[j]);
            right = min(right, y[j]);

        }
        
        if (left <= right) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    // Please write your code here.
    return 0;
}