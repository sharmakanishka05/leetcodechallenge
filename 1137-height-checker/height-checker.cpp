class Solution {
public:
    int heightChecker(vector<int>& heights) {
       vector<int> ordered=heights;
       sort(heights.begin(),heights.end());
       int n=heights.size();
       int count=0;
       for(int i=0;i<n;i++){
        if(ordered[i]!=heights[i])
        count++;
       }
       return count;
    }
};