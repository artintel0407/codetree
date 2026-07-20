#include <iostream>
#include <list>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    list<char> l;

    for (int i = 0; i < s.size(); i++) {
        l.push_back(s[i]);
    }

    list<char>::iterator it = l.end();

    char cmd;
    for (int i = 0; i < m; i++) {
        cin >> cmd;
        if (cmd == 'L') {
            if (it == l.begin()) continue;
            it--;
        }
        else if (cmd == 'R') {
            if (it == l.end()) continue;
            it++;
        }
         else if (cmd == 'D') {
            if (it == l.end()) continue;
            auto e = it;
            it++;
            l.erase(e);
        }
         else if (cmd == 'P') {
            char x;
            cin >> x;
            
            l.insert(it, x);
        }
    }

    

    for (auto i = l.begin(); i != l.end(); i++) {
        cout << *i;
    }
    // Please write your code here.
    return 0;
}