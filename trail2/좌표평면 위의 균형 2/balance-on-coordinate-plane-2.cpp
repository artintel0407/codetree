#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    int n;
    cin >> n;

    vector<Point> p(n);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        p[i].x = x;
        p[i].y = y;
    }
    int result = 10000;
    for (int i = 2; i <= 98; i += 2) {
        for (int j = 2; j <= 98; j += 2) {
            int c[4]{};

            for (int k = 0; k < n; k++) {
                if (p[k].x < i && p[k].y < j) c[0]++;
                else if (p[k].x < i && p[k].y > j) c[1]++;
                else if (p[k].x > i && p[k].y < j) c[2]++;
                else if (p[k].x > i && p[k].y > j) c[3]++;
            }

            int mx = max({ c[0], c[1], c[2], c[3] });

            result = min(result, mx);
        }
    }

    cout << result;


    // Please write your code here.
    return 0;
}