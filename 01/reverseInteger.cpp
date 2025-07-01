#include <iostream>
using namespace std;

int main() {
    int x = 123;
    int ans = 0, digit = 0;

    while(x != 0) {
        digit = x % 10;
        if (ans > INT_MAX/10 || ans < INT_MIN/10) {
            ans = 0;
            break;
        }
        ans = (ans * 10) + digit;
        x /= 10;
    }
    cout << ans << endl;

    return 0;
}