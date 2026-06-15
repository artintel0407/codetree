#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Dist {
    int k;
    vector<int> available;
    vector<int> v;
    Dist(int k, vector<int>& v) : k(k), v(v) {}

    bool possible(int a) {
        for (int i = 0; i < v.size(); i++) {
         
            if(v[i] <= a) available.push_back(i);
        }

        for (int i = 1; i < available.size(); i++) {
            if (available[i] - available[i - 1] > k) return false;
        }
        return true;
    }
};

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    int v_max = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        v_max = max(v_max, v[i]);
    }


    int mn=10000;
    for (int i = v_max; i >= max(v[0], v[n - 1]); i--) {
        Dist d(k, v);

        if (d.possible(i)) {
            mn = min(mn, i);
        }
    }

    cout << mn;
    // Please write your code here.
    return 0;
}