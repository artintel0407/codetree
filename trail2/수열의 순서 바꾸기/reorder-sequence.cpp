#include <iostream> // 중간에 놀아서 체크  시간 체크 안 함
#include <vector>
#include <algorithm> 
#include <list>
using namespace std;

int main() {

    int n;
    cin >> n;

    list<int> li;


    bool flag  = true;
    int cnt = 0;
    for (int i =  0; i < n; i++) {
        int x;
        cin >> x;
        li.push_back(x);
    }



    for (int i = 0; i < n; i++) {
        flag = true;
        list<int>::iterator p = li.begin();
        for (int j =  0; j < n; j++) {
            //cout << *p << " ";
            if (*p != (j + 1)) {
                flag = false;
            }
            p++;
        }
        //cout << endl;
        if (flag) {
            cout << cnt;
            return 0;
        }
        cnt++;
        list<int>::iterator it, pos;
        it = li.begin();
        pos = li.end();
        pos--;
        list<int>::iterator prev = pos;
        prev--;

        if(*it == n) {
           li.push_back(n);
           li.pop_front();
        }
        else {
            while(*pos > *it) {
                if(*prev > *pos) {
                    pos--;
                    break;
                }
                pos--;
                prev--;
            }
            pos++;
            li.insert(pos, *it);
            li.pop_front();
        }

    }
    cout << cnt;
    




    // Please write your code here.
    return 0;
}