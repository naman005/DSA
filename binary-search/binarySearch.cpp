#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  

        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    return -1; 
}

int main() {
    vector<int> nums = {-10, -3, 0, 5, 9, 12, 20};
    int target = 9;

    cout << "Array: ";
    for (int x : nums) cout << x << " ";
    cout << "\nTarget: " << target << endl;

    int result = binarySearch(nums, target);

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}
