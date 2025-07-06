#include<iostream>
using namespace std;

int main() {
    int arr[5] = {7,9,1,2,3};
    int size = 5;
    int s = 0, e = size - 1, mid = s + (e - s)/2;
    while(s < e) {
        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    cout << "Pivot is : " << arr[mid] << endl;
    return 0;
}