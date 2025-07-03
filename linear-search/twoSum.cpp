#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {2,11,7,15};
    int target = 9;

    vector<int> ans;

    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i]+nums[j] == target) {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
            }
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}