#include <iostream> // 4 start
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x1(n);
    vector<int> x2(n);

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    int mn = 100000;
    for (int i = 0; i < n; i++) {
        
        int min_x1 = 100000;
        int max_x2 = 0;
        for (int j = 0;j < n; j++) {
            if (i ==j)continue;

            min_x1 = min(min_x1, x1[j]);
            max_x2 = max(max_x2, x2[j]);
        }
        

        mn = min(mn, max_x2 - min_x1);
    }

    cout << mn;
    
    // Please write your code here.
    return 0;
} 