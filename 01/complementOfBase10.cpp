#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int m = x;
    int mask = 0;
    while(m != 0) {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~x) & mask;
    cout << ans;
    return 0;
}