#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n - 1);

    for (int i = 0; i < n -1 ;i++) {
        cin >> v[i];
    }

    for (int i = 1; i < v[0]; i++) {
        vector<int> src;

        src.push_back(i);
        int pre = i;
        for (int j = 0; j < n - 1; j++) {
            src.push_back(v[j] - pre);
            pre = v[j] - pre;
        }

        vector<int> copy = src;

        sort(copy.begin(), copy.end());


        bool flag = true;
        for (int i = 1; i <= n; i++) {
            if (copy[i - 1] != i) {
                flag = false;
                break;
            }
        }

        if (flag) {
            for (int i = 0; i < n; i++) {
                cout << src[i] << " ";
            }
            return 0;
        }
    }
    // Please write your code here.
    return 0;
}