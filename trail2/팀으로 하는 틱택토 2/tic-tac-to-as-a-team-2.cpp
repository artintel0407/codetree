#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int a, b, c;
    cin >> a >> b >> c;

    bool visited[10][10]{};

    for (int i = 0; i < 3; i++) {
        arr[0][2 - i] = a % 10;
        arr[1][2 - i] = b % 10;
        arr[2][2 - i] = c % 10;
        a /= 10;
        b /= 10;
        c /= 10;
    }

    int cnt = 0;

    for (int i = 0; i < 3; i++) {
        if ((arr[0][i] == arr[2][i] || arr[0][i] == arr[1][i] || arr[1][i] == arr[2][i]) && !(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])) {
            int a = arr[0][i];
            int b = arr[1][i];
            int c = arr[2][i];
            if (a != b && !visited[a][b]) {
                visited[a][b] = true;
                visited[b][a] = true;
                cnt++;
            }
            else if (a != c && !visited[a][c]) {
                visited[a][c] = true;
                visited[c][a] = true;
                cnt++;
            }
            else if (b != c && !visited[b][c]) {
                visited[b][c] = true;
                visited[c][b] = true;
                cnt++;
            }
        }
        if ((arr[i][0] == arr[i][2] || arr[i][0] == arr[i][1] || arr[i][1] == arr[i][2]) && !(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])) {
            int a = arr[i][0];
            int b = arr[i][1];
            int c = arr[i][2];
            if (a != b && !visited[a][b]) {
                visited[a][b] = true;
                visited[b][a] = true;
                cnt++;
            }
            else if (a != c && !visited[a][c]) {
                visited[a][c] = true;
                visited[c][a] = true;
                cnt++;
            }
            else if (b != c && !visited[b][c]) {
                visited[b][c] = true;
                visited[c][b] = true;
                cnt++;
            }
        }
    }
    if ((arr[0][0] == arr[1][1] || arr[1][1] == arr[2][2] || arr[0][0] == arr[2][2]) && !(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])) {
        int a = arr[0][0];
        int b = arr[1][1];
        int c = arr[2][2];
        if (a != b && !visited[a][b]) {
            visited[a][b] = true;
            visited[b][a] = true;
            cnt++;
        }
        else if (a != c && !visited[a][c]) {
            visited[a][c] = true;
            visited[c][a] = true;
            cnt++;
        }
        else if (b != c && !visited[b][c]) {
            visited[b][c] = true;
            visited[c][b] = true;
            cnt++;
        }
    }
    if ((arr[2][0] == arr[1][1] || arr[2][0] == arr[0][2] || arr[1][1] == arr[0][2]) && !(arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2])) {
        int a = arr[2][0];
        int b = arr[1][1];
        int c = arr[0][2];
        if (a != b && !visited[a][b]) {
            visited[a][b] = true;
            visited[b][a] = true;
            cnt++;
        }
        else if (a != c && !visited[a][c]) {
            visited[a][c] = true;
            visited[c][a] = true;
            cnt++;
        }
        else if (b != c && !visited[b][c]) {
            visited[b][c] = true;
            visited[c][b] = true;
            cnt++;
        }
    }


    cout << cnt;
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // Please write your code here.
    return 0;
}