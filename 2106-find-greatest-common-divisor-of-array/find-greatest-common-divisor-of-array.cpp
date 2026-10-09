class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int small=nums[0];
        int largest=nums[n-1];
      

         return gcd(small,largest);
    }
};