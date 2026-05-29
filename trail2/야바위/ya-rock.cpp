#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for (int i =0 ;i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    int mx = 0;
    for (int i = 1; i <= 3; i++) {
        int cnt = 0;
        int x = i;
        for (int j = 0; j < n; j++) {
            
            

            if(x == a[j]) {
                x = b[j];
            }
            else if(x == b[j]) {
                x = a[j];
            }
            
            if(x == c[j]) cnt++;
        }
        
        mx = max(mx, cnt);
    }

    cout << mx;
    // Please write your code here.
    return 0;
}