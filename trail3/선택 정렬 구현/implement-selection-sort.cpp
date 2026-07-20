#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int&  x : v) {
        cin >> x;
    }

    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[min]) {
                min = j;
            }
        }
        swap(v[i], v[min]);
    }

    for (int x : v) {
        cout << x << " ";
    }
    // Please write your code here.
    return 0;
}