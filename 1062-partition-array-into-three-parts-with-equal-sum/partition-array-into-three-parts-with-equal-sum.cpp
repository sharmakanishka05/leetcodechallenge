class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        if(sum%3 !=0)
        return false;

        int equalsum=sum/3;
        int currentsum=0;
        int count=0;
        for(int j=0;j<n;j++){
          currentsum=currentsum+arr[j];
          if(currentsum==equalsum){
             count++;
          currentsum=0;
          }
        }

       return count>=3; 
    }
};