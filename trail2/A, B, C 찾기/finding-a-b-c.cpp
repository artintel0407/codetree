#include <iostream> // 37분 시작
#include <vector>
#include <algorithm> // 40분 이해?
using namespace std;

int main() {
    int n = 7;
    vector<int> v(7);

    for (int& x : v) {
        cin >> x;
    }

    sort(v.begin(), v.end());

   
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                
                
                vector<int> copy;

                copy.push_back(v[i]);
                copy.push_back(v[j]);
                copy.push_back(v[k]);
                copy.push_back(v[i] + v[j]);
                copy.push_back(v[j] + v[k]);
                copy.push_back(v[k] + v[i]);
                copy.push_back(v[i] + v[j] + v[k]);
                
                sort(copy.begin(), copy.end());
                

                if (v == copy) {
                    cout << v[i] << " " << v[j] << " " << v[k];
                    return 0;
                }
            }
        }
    }
    // Please write your code here.
    return 0;
}