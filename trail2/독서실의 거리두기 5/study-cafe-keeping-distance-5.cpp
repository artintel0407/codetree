#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr;

    cin >> arr;

    int mx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == '0') {
            arr[i] = '1';
            int min_dis = n;
            int pre = -1;
            for (int j = 0; j < n; j++) {               

                

                if(arr[j] == '1') {
                    if (pre != -1) {
                        min_dis = min(j - pre, min_dis);
                    }
                    
                    pre = j;
                }
            }
            mx = max(min_dis, mx);


            arr[i] = '0';
        }
        
        
    }

    cout << mx;
    // Please write your code here.
    return 0;
}