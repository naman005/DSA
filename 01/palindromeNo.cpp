#include<iostream>
using namespace std;

int main() {
    int x = 121, temp = 0;
    int n = x;

    while(n != 0) {
        int digit = n % 10;
        if(temp < INT_MAX/10 && temp > INT_MIN/10) temp = (temp * 10) + digit;
        n /= 10;
    }
    cout << (temp == x) << endl;

    return 0;
}