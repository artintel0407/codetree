#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << max(c - b, b - a) - 1;
    // Please write your code here.
    return 0;
}