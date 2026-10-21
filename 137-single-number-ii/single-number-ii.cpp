class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int ,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int num;
        for(auto it:mp){
            if(it.second==1)
             num=it.first;
        }
        return num;
    }
};