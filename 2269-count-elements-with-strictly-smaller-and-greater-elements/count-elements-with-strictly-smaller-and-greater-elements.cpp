class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        int minimum=nums[0];
        int maximum=nums[n-1];
        for(int i=1;i<n-1;i++){
            if(nums[i]<maximum && nums[i]>minimum)
            count++;
        }
       return count; 
    }
};