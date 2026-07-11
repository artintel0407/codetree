#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b < c || d < a) cout << b - a + d - c;
    else if (a <= c && d <= b) cout << b - a;
    else if (c <= a && b <= d) cout << d - c;
    else if (a <= c && c <= b && c <= b && b<= d) cout << d - a;
    else if (c <= a && a <= d && a << d && d << b) cout << b - c;
    // Please write your code here.
    return 0;
}