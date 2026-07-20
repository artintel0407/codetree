#include <iostream>
#include <list>
using namespace std;

int main() {
    int n;
    cin >> n;

    list<int> li;

    string cmd;
    while(n--) {
        cin >> cmd;

        if (cmd == "push_front") {
            int a;
            cin >> a;
            li.push_front(a);
        }
        else if (cmd == "push_back") {
            int a;
            cin >> a;
            li.push_back(a);
        }
        else if (cmd == "pop_front") {
            cout << li.front() << endl;
            li.pop_front();
        }
        else if (cmd == "pop_back") {
            cout << li.back() << endl;
            li.pop_back();
        }
        else if (cmd == "size") {
            cout << li.size() << endl;
        }
        else if (cmd == "empty") {
            cout << li.empty() << endl;
        }
        else if (cmd == "front") {
            cout << li.front() << endl;
        }
        else if (cmd == "back") {
            cout << li.back() << endl;
        }
    }
    // Please write your code here.
    return 0;
}