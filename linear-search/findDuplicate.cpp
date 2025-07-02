#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    //approach 1 - sort
    vector<int> arr(7);
    arr = {6, 3, 1, 5, 4, 3, 2};
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == arr[i+1]) {
            cout << arr[i] << endl;
            break;
        }
    }
    //approach 2 - bit manipulation
    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    for(int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }

    cout << ans << endl;

    return 0;
}