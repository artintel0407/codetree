#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    int a1, b1, a2, b2;
    cin >> x1 >> x2 >> y1 >> y2;
    cin >> a1 >> a2 >> b1 >> b2;

    if (b1 < x1 || b2 < x2 || y1 < a1 || y2 < a2) cout << "nonoverlapping";
    else cout << "overlapping";
    // Please write your code here.
    return 0;
}