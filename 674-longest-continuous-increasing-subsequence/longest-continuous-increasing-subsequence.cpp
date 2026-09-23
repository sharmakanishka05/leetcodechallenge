class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int maximum=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
            count++;
          
            }
          else 
            count=1;
           
           maximum=max(maximum,count);
        }
       
        return maximum ;
    }
};