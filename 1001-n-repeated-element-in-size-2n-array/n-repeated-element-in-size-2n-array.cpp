class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int len=nums.size();
        int n=len/2;
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
      int ans;
        for(auto it:mp){
            if(it.second==n){
            ans= it.first;
            }
            
        }
        return ans;
    }
};