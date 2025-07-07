#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>& arr, int mid, int k) {
    int count = 1;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(sum + arr[i] <= mid) sum += arr[i];
        else {
            count++;
            if(count > k || arr[i] > mid) {
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
       int s = 0;
       int sum = 0;
       for(int i = 0; i < nums.size(); i++) sum += nums[i]; 
       int e = sum;
       int ans = 0;
       int mid = s + (e - s)/2;
       while(s <= e) {
            if(isPossible(nums, mid, k)) {
                ans = mid;
                e = mid - 1;
            } else s = mid + 1;
            mid = s + (e - s)/2;
        }
        return ans;
    }
};

int main() {
    // Book Allocation Problem
    return 0;
}