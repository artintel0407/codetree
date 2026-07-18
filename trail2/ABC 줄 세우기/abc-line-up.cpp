#include <iostream> // 25분시작
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c;
    vector<int> v;

    for (int i = 0 ;i <n; i++) {
        cin >> c;
        v.push_back(c - 'A');
    }
    int cnt = 0;
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (v[j] > v[j + 1]) {
                cnt++;
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }


    cout << cnt;
    // Please write your code here.
    return 0;
}