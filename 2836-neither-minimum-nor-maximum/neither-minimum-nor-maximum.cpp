class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n <= 2)
            return -1;
        int s = 0;
        int e = n - 1;
        int mid = (s + e) / 2;
        return nums[mid];
    }
};