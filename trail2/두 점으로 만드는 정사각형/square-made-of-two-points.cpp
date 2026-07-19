#include <iostream> // 2분시작
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int min_x = min({x1,x2,x3,x4});
    int max_x = max({x1,x2,x3,x4});
    int min_y = min({y1,y2,y3,y4});
    int max_y = max({y1,y2,y3,y4});


    int a = max_x - min_x;
    int b = max_y - min_y;

    if (a < b) {
        cout << b * b;
    }
    else {
        cout << a * a;
    }
    // Please write your code here.
    return 0;
} 