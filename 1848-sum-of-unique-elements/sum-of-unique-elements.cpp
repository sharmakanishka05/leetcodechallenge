class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        } int sum=0;
        for(auto it:mp){
            if(it.second<2){
                sum=sum+it.first;
            }
        }
        return sum;
    }
};