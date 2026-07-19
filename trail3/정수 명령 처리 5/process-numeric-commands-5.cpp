#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v;


    string cmd;

    while(n--) {
        cin >> cmd;
        if (cmd == "push_back") {
            int a;
            cin >> a;
            v.push_back(a);
        }
        else if (cmd == "pop_back") {
            v.pop_back();
        }
         else if (cmd == "size") {
            cout << v.size() << endl;
        }
         else if (cmd == "get") {
            int x;
            cin >> x;
            cout << v[x - 1] << endl;
        }
    }

    // Please write your code here.
    return 0;
}