#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 최댓값을 1부터 시작해서 늘림. 초기값을 배열에서 정할 수도 있겠지만 귀찮아서 패스 > 초기값 정하는 걸로 결정
// 그리디 적용해서 칸막이 갯수가 m - 1보다 작거나 같은 경우 종료
int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    int result = 0;
    for (int& x : v) {
        cin >> x;

        result = max(result, x);
    }


    while (true) {
        int cnt = 0;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            
            if(sum > result) {
                sum = v[i];
                cnt++;
            }
        }

        if(cnt <= m - 1) {
            cout << result;
            return 0;
        }
        result++;
    }


}