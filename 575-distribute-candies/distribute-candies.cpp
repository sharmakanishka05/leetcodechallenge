class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
    int n=candyType.size();
    int type=n/2;
      sort(candyType.begin(),candyType.end());
      candyType.erase(unique(candyType.begin(),candyType.end()),candyType.end());
      int m=candyType.size();
      if(type<m)
      return type;

      return m;
   
     
    }
};