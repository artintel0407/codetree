#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int n) {
    vector<int> digit;
    while(n > 0) {
        digit.push_back(n % 10);
        n /= 10;
    }

    for (int i = 0; i < digit.size() / 2; i++) {
        if(digit[i] != digit[digit.size() - i - 1]) return false;
    }
    return true;
}

int main() {
    int x, y;
    cin >> x >> y;
    
    int cnt = 0;

    for (int i = x; i <= y; i++) {
        if(isPalindrome(i)) cnt++;
    }

    cout << cnt;
    return 0;
}