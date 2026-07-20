#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int& x : v) {
        cin >> x;
    }

    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int key = v[i];

        while(j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }


    for (int x : v) {
        cout << x << " ";
    }
    // Please write your code here.
    return 0;
}