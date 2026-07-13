#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    p = p - 1; // 0 index 기준으로 조정
    vector<char> c(m);
    vector<int> u(m);

    vector<bool> visited(n, false);


    for (int i = 0; i < m; i++) {
        cin >> c[i] >> u[i];
    }

    
    for (int i = p; i < m; i++) {
        if(u[p] == 0) {
            return 0;
        }

        int j = i - 1;
        while(j > 0 && u[i] == u[j]) {
            
                visited[c[j] - 'A'] = true;
            
            j--;
        } 
        // if (i > 0 && u[i - 1] == u[i] && c[i - 1] != c[i]) {
        //     visited[c[i - 1] - 'A'] = true;
        // }
        if(!visited[c[i] - 'A']) {
            
            visited[c[i] - 'A'] = true;
        }
    }

    for (int i = 0; i < n; i++) {
        if(!visited[i]) {
            cout << (char)('A' + i) << " ";
        }
    }

    


    // Please write your code here.
    return 0;
}