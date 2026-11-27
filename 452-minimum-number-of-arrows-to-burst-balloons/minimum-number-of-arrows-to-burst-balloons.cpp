class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
      int n=points.size();
        sort(points.begin(),points.end());
        vector<int>prev=points[0];
        int count=1;
        for(int i=1;i<n;i++){
            int currstartpoint=points[i][0];
            int currendpoint=points[i][1];

            int prevstartpoint=prev[0];
            int prevendpoint=prev[1];
            if(currstartpoint>prevendpoint){
                count++;
                prev=points[i];
            }
            else{
              prev[0]=max(prevstartpoint,currstartpoint);
              prev[1]=min(prevendpoint,currendpoint);  
            }
        }
        return count;  
    }
};