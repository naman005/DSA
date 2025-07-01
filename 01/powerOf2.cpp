#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n = 16, ans = 0;
    bool isPow = false;
    for(int i = 0; i <= 30; i++) {
        ans = pow(2, i);
        if(ans == n) {
            isPow = true;
            break;
        }
    }
    if(isPow) {
        cout << "yes";
    } else {
        cout << "No";
    }
    return 0;
}