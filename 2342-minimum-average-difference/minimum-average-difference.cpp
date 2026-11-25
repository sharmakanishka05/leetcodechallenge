class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
         int index= -1;
         long long left_sum=0;
         long long right_sum=0;
         long long result=INT_MAX;
         for(int i=0;i<n;i++){
            left_sum += nums[i];
            right_sum= sum-left_sum;
            int n1=i+1;
            int n2=n-n1;
            long long ls=left_sum/n1;
            long long rs= (i==(n-1))? 0:right_sum/n2;
            int average=abs(ls-rs);
            if(result>average){
                result=average;
                index=i;
            }
            

         }

        return index;
    }
};