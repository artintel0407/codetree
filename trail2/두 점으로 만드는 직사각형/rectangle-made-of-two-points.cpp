#include <iostream> //54start
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


    cout << (max_x - min_x) * (max_y - min_y);
    // Please write your code here.
    return 0;
}