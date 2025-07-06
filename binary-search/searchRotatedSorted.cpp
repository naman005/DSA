#include<iostream>
using namespace std;

int findPivot(int arr[], int size) {
    int s = 0, e = size - 1, mid = s + (e - s)/2;
    while(s < e) {
        if(arr[mid] > arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return mid;
}

int binarySearch(int arr[], int start, int end, int key) {
    
    while(start <= end) {
        int mid = start + (end - start)/2;

        if(arr[mid] == key) return mid;
        else if (arr[mid] > key) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int main() {
    int arr[7] = {4,5,6,7,0,1,2};
    int size = 7;
    int key = 1, index = -1;
    int pivot = findPivot(arr, 7);
    if (arr[pivot] <= key && arr[size - 1] >= key) {
        index = binarySearch(arr, pivot, size - 1, key);
    } else {
        index = binarySearch(arr, 0, pivot - 1, key);
    }
    cout << index << endl;
    return 0;
}