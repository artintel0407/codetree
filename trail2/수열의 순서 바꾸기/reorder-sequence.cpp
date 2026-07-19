#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int& x : v) {
        cin >> x;
    }

    int cnt = 0;

    for (int i = n - 1; i > 0; i--) {
        if (v[i - 1] > v[i]) {
            break;
        }
        cnt++;
    }

    cout << n - cnt - 1;
}
