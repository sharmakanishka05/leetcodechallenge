class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> normal=nums;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int max=nums[n-1];
        for(int i=0;i<n;i++){
           if(normal[i] != max && max<2*normal[i])
           return -1;
           
        }
        for(int i=0;i<n;i++){
            if(normal[i]==max)
            return i;
        }
        return -1;
    }
};