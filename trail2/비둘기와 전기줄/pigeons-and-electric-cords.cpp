#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(11, -1);


    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int idx, pos;
        cin >> idx >> pos;

        if(v[idx] == -1) v[idx] = pos;
        else if (v[idx] != pos) {
            cnt++;
            v[idx] = pos;
        }
        
    }

    cout << cnt;
    // Please write your code here.
    return 0;
}