class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        
        for(int x : nums){
            mp[x]++;
        }
        int maxkey=0;
        int maxvalue=0;
        for(auto it : mp){
            if(it.second>maxvalue){
                maxvalue=it.second;
                maxkey=it.first;
            }
               
        }
        return maxkey;
        
    }
};