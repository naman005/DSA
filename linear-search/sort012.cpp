#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums, int size) {
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i <= size; i++) {
        if (nums[i] == 0) count0++;
        else if (nums[i] == 1) count1++;
        else count2++;
    }

    int index = 0;

    while (count0--) nums[index++] = 0;
    while (count1--) nums[index++] = 1;
    while (count2--) nums[index++] = 2;
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int size = nums.size() - 1;

    sortColors(nums, size);

    for(int i = 0; i <= size; i++) {
        cout << nums[i] << " "; 
    }

    return 0;
}
