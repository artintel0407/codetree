#include <iostream> // 59분 시작
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(15);
    for (int& x : v) {
        cin >> x;
    }

    sort(v.begin(), v.end());

    int a = v[0];
    int b = v[1];
    int c = v[2];
    int d = v[14] - a - b- c;

    cout << a << " " << b << " " << c << " " << d;
    // Please write your code here.
    return 0;
}