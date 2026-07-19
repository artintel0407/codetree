#include <iostream> // 49분시작
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    int avg = sum / n;


    int res = 0;

    for (int i = 0; i < n; i++) {
        res += abs(v[i] - avg);
    }

    cout << res / 2;

    // Please write your code here.
    return 0;
}