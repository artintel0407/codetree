#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int& x : v) {
        cin >> x;
    }

    int mn = INT_MAX;

    for (int i = 0; i < n; i++) {
        v[i] *= 2;
        for (int j = 0; j < n; j++) {
            vector<int> remain;

            for (int k = 0; k < n; k++) {
                if(k == j) continue;
                remain.push_back(v[k]);
            }
            int sum = 0;
          
            
            for (int k = 0; k < n - 2; k++) {
                sum += abs(remain[k] - remain[k + 1]);
                
            }
        
            
            if (sum < mn) {
                mn = sum;
            }
        }


        v[i] /= 2;
    }

    cout << mn;
    // Please write your code here.
    return 0;
}