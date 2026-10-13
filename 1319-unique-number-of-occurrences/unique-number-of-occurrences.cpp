class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
       set<int> s;
       for(auto it:mp){
        s.insert(it.second);
       }
       if(s.size()==mp.size())
       return true;

       return false;
    }
};