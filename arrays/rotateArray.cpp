#include<iostream>
using namespace std;

int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int temp[7];
    int k = 2, n = 7;

    for(int i = 0; i < n; i++) {
        int index = (i + k) % n;
        temp[index] = arr[i];
    }
     
    for(int i = 0; i < n; i++) {    
        arr[i] = temp[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }

    return 0;
}