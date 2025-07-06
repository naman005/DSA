#include<iostream>
using namespace std;

int main() {
    int n = 15;
    int s = 0, e = n, mid = s + (e - s)/2, ans = -1;
    while(s < e) {
        if(mid * mid == n) {
            cout << mid << endl;
        } else if (mid * mid > n) {
            e = mid - 1;
        } else {
            s = mid + 1;
            ans = mid;
        }
        mid = s + (e - s)/2;
    }
    cout << ans << endl;
    return 0;
}