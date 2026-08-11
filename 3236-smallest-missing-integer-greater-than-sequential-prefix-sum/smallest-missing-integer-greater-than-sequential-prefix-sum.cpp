class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
               sum=sum+nums[i];
                }
                else
                break;
                }
    
                int x=sum;
                while(true){
                    bool missingele=false;
                    for(int i=0;i<nums.size();i++){
                        if(nums[i]==x){
                            missingele=true;
                            break;
                        }
                    }
                    if( !missingele)
                    return x;

                    x++;
                }
    }
};