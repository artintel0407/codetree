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

    for (int i = 0; i <= 10; i++) {
        for (int j = i + 1; j <= 10; j++) {
            
            for (int k = 0; k <= 10; k++) {
                bool flag = true;
                for (int l = 0; l < n; l++) {
                    if (!(p[l].x == i || p[l].x == j || p[l].y == k)) flag = false;
                }

                if(flag) {
                    cout << 1;
                    return 0;
                }
            }
        }
    }

    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            
            for (int k = j + 1; k <= 10; k++) {
                bool flag = true;
                for (int l = 0; l < n; l++) {
                    if (!(p[l].x == i || p[l].y == j || p[l].y == k)) flag = false;
                }

                if(flag) {
                    cout << 1;
                    return 0;
                }
            }
        }
    }

    for (int i = 0; i <= 10; i++) {
        for (int j = i + 1; j <= 10; j++) {
            
            for (int k = j + 1; k <= 10; k++) {
                bool flag = true;
                for (int l = 0; l < n; l++) {
                    if (!(p[l].x == i || p[l].x == j || p[l].x == k)) flag = false;
                }

                if(flag) {
                    cout << 1;
                    return 0;
                }
            }
        }
    }

    for (int i = 0; i <= 10; i++) {
        for (int j = i + 1; j <= 10; j++) {
            
            for (int k = j + 1; k <= 10; k++) {
                bool flag = true;
                for (int l = 0; l < n; l++) {
                    if (!(p[l].y == i || p[l].y == j || p[l].y == k)) flag = false;
                }

                if(flag) {
                    cout << 1;
                    return 0;
                }
            }
        }
    }

    cout << 0;
    // Please write your code here.
    return 0;
}