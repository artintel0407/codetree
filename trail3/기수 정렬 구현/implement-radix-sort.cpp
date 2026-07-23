#include <iostream>
#include <vector>
using namespace std;

// function radix_sort(arr, k)
//   for pos = k - 1 ... pos >= 0:
//     set arr_new = [10][]
//     for i = 0 ... i < arr.size
//       set digit = posth digit of arr[i]
//       arr_new[digit].append(arr[i])

//     set store_arr = []
//     for i = 0 ... i < 10
//       for j = 0 ... j < arr_new[i].size
//         store_arr.append(arr_new[i][j])
  
//     arr = store_arr

//   return arr


vector<int> radix_sort(vector<int> arr) { // k 는 6
    for (int pos = 0; pos < 6; pos++) {
        vector<vector<int>> arr_new(10);

        for (int i = 0 ; i < arr.size(); i++) {
            int digit = arr[i];

            for (int j = 0; j < pos; j++) {
                digit /= 10;
            }

            digit %= 10;

            arr_new[digit].push_back(arr[i]);
        }

        vector<int> store_arr;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < arr_new[i].size(); j++) {
                store_arr.push_back(arr_new[i][j]);
            }
        }
        arr = store_arr;
    }

    return arr;
}


int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int& x : v) {
        cin >> x;
    }

    v = radix_sort(v);


    for (int x : v) {
        cout << x << " ";
    }


    // Please write your code here.
    return 0;
}