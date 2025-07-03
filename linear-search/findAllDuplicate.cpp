#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    vector<int> nums(8);
    vector<int> ans;

    nums = {4,3,2,7,8,2,3,1};

    for(int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;

        if(nums[index] < 0) {
            ans.push_back(abs(nums[i]));
        } else {
            nums[index] = -nums[index];
        }
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}