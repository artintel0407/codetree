#include <iostream> // 55분 시작
#include <vector>
#include <cmath>
using namespace std; // 59분 이해 완료

int main() {
    vector<int> x(3);
    vector<int> y(3);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            char c;
            cin >> c;

            if (c == 'L') {
                x[0] = i;
                y[0] = j;
            }
            else if (c == 'B') {
                x[1] = i;
                y[1] = j;
            }
            else if (c == 'R') {
                x[2] = i;
                y[2] = j;
            }
        }
    }

    if (x[0] == x[1]) {
        if (y[0] > y[1]) {
            swap(y[0], y[1]);
        }

        if (y[0] < y[2] && y[2] < y[1] && x[0] == x[2]) {
            cout << y[1] - y[0] + 1;
        }
        else {
            cout << y[1] - y[0] - 1;
        }
    }
    else if (y[0] == y[1]) {
        if (x[0] > x[1]) {
            swap(x[0], x[1]);
        }

        if (x[0] < x[2] && x[2] < x[1] && y[0] == y[2]) {
            cout << x[1] - x[0] + 1;
        }
        else {
            cout << x[1] - x[0] - 1;
        }
    }
    else {
        cout << abs(y[1] - y[0]) + abs(x[1] - x[0]) - 1;
    }
    // Please write your code here.
    return 0;
}