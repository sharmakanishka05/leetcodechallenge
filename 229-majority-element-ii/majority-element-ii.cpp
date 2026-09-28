class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int size=n/3;
       map<int,int>mp;
       for(int x:nums){
        mp[x]++;
       }
       for(auto it:mp){
        if(it.second>size){
            ans.push_back(it.first);
        }
       }
        return ans; 
    }
};