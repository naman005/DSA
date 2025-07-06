#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int last = 0;                       // next position for a non‑zero
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            swap(nums[last], nums[i]);  // no‑op when i == last
            ++last;
        }
    }
}