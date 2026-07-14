#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;


    int prev = 0;
    int max_length = 0;
    int y1, y2;
    for (int i = 1; i < n; i++) {
        if (s[i] == '1') {
            if (max_length < i - prev) {
                max_length = i - prev;
                y1 = prev;
                y2 = i;
            }
            
            prev = i;
        }
    }


  
    
    s[(y1 + y2) / 2] = '1';

    
    prev = 0;
    int min_length = 1000000;
    
    for (int i = 1; i < n; i++) {
        if (s[i] == '1') {
            min_length = min(i - prev, min_length);
            prev = i;
        }
    }

    cout << min_length;

    // Please write your code here.
    return 0;
}