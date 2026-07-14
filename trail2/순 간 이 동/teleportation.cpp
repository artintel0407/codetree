#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int res1 = abs(a - b);

    int res2;

    if(abs(a - x) < abs(a - y)) {
        res2 = abs(a - x) + abs(b - y);
    }
    else {
        res2 = abs(a - y) + abs(b - x);
    }

    cout << min(res1, res2);


    // Please write your code here.
    return 0;
}