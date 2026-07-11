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

    for (int i = 0; i <= 100; i++) {
        bool flag = true;

        for (int j = 0; j < n; j++) {
            if (!(x[j] <= i && i <= y[j])) {
                flag = false;
                break;
            }
        }

        if(flag) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

    // Please write your code here.
    return 0;
}