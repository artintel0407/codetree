#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int& x : a) {
        cin >> x;
    }

     for (int& x : b) {
        cin >> x;
    }

    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += a[i] - b[i];


        a[i + 1] += a[i] - b[i];
    }

    cout << sum; 
    // Please write your code here.
    return 0;
}