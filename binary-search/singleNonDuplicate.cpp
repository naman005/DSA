#include<iostream>
using namespace std;

int main() {
    int arr[5] ={1,2,2,3,3};
    int n = 5;
    int s = 0, e = n - 1, mid = s + (e - s)/2;
    while(s <= e) {
        int first = 0, second = 0;
        if (mid == 0 || mid == e) {
            cout << arr[mid] << endl;
            break;
        } 
        if(arr[mid + 1] != arr[mid] && arr[mid - 1] != arr[mid]) {
            cout << arr[mid] << endl;
            break;
        } else if (arr[mid - 1] == arr[mid]) {
            first = mid - 1;
            second = mid; 

        } else if (arr[mid + 1] == arr[mid]) {
            first = mid;
            second = mid + 1;
        }
        if(first % 2 == 0) s = mid + 1;
        else e = mid - 1;

        mid = s + (e - s)/2;
    }
    return 0;
}