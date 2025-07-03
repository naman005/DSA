#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        vector<int>ans;
        while(i<m && j<n)
        {
            if(nums1[i]==nums2[j])
            {
                ans.push_back(nums1[i]);
                while(i<m && nums1[i]==ans[ans.size()-1])
                {
                    i++;
                }
                while(j<n && nums2[j]==ans[ans.size()-1])
                {
                    j++;
                }
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return ans;
        
}

int main() {
    vector<int> nums1, nums2, ans;
    nums1 = {4,9,5};
    nums2 = {9,4,9,8,4};

    ans = intersection(nums1, nums2);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}