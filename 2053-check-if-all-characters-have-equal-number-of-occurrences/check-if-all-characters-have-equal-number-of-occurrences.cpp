class Solution {
public:
    bool areOccurrencesEqual(string s) {
      map<char,int>mp;
      for(char x:s){
        mp[x]++;
      }
      int first=mp.begin()->second;
      for(auto it:mp)
      {
        if(it.second != first){
            return false;
        }
      }
      return true;
    }
};