#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v(15);

    for (int i =0;i < 15;i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i  = 0; i < 15; i++) {
        for (int j = i + 1; j < 15; j++) {
            for (int k = j + 1; k < 15; k++) {
                for (int l = k + 1; l < 15; l++) {
                    vector<int> w;
                    w.push_back(v[i]);
                    w.push_back(v[j]);
                    w.push_back(v[k]);
                    w.push_back(v[l]);

                    w.push_back(v[i] + v[j]);
                    w.push_back(v[i] + v[k]);
                    w.push_back(v[i] + v[l]);
                    w.push_back(v[j] + v[k]);
                    w.push_back(v[j] + v[l]);
                    w.push_back(v[k] + v[l]);
        

                    w.push_back(v[i] + v[j] + v[k]);
                    w.push_back(v[i] + v[j] + v[l]);
                    w.push_back(v[i] + v[k] + v[l]);
                    w.push_back(v[j] + v[k] + v[l]);

                    w.push_back(v[i] + v[j] + v[k] + v[l]); 

                    sort(w.begin(), w.end());

                    if (v == w) {

                        cout << v[i] << " " << v[j] << " " << v[k] << " " << v[l];
                        return 0;
                    }
                }
            }
        }
    }
    // Please write your code here.
    return 0;
}