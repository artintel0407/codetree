#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int total = 0;

    for (int i = x; i <= y; i++) {
        int n = i;

        int cnt = 0;

        int disit[10]{};

        while(n > 0) {
            cnt++;
            disit[n % 10]++;
            n /= 10;
        }

        for (int j = 0; j < 10; j++) {
            if(disit[j] == cnt  - 1) total++;
        }
    }

    cout << total;
    // Please write your code here.
    return 0;
}