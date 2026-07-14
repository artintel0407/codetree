#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(3);

    for (int& x : v) {
        cin >> x;
    }

    vector<int> copy = v;

    sort(copy.begin(), copy.end());

    if(copy[0] + 1 == copy[1] && copy[1] + 1 == copy[2]) {
        cout << 0;
    }
    else if (abs(v[0] - v[1]) == 2 || abs(v[1] - v[2]) == 2) {
        cout << 1;
    }
    else {
        cout << 2;
    }
}