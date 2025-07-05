#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>& nums, int target) {
    int size = nums.size();

    int ans = -1, s = 0, e = size - 1, mid = s + (s - e)/2 ;
    while(s <= e) {
        if(nums[mid] == target) {
            ans = mid;
            e = mid - 1;
        } else if (nums[mid] < target) {
            s = mid + 1;
        } else if (nums[mid] > target) {
            e = mid - 1;
        }
        mid = (s + e)/2;
    }
    return ans;
}

int lastOccurence(vector<int>& nums, int target) {
    int size = nums.size();

    int ans = -1, s = 0, e = size - 1, mid = (s + e)/2 ;
    while(s <= e) {
        if(nums[mid] == target) {
            ans = mid;
            s = mid + 1;
        } else if (nums[mid] < target) {
            s = mid + 1;
        } else if (nums[mid] > target) {
            e = mid - 1;
        }
        mid = (s + e)/2;
    }
    return ans;
}

int main() {
    vector<int> nums = {5, 7, 8, 8, 8, 8, 10};
    
    int fOccur = firstOccurence(nums, 8);
    int lOccur = lastOccurence(nums, 8);

    cout << fOccur << " " << lOccur << endl;

    return 0;
}