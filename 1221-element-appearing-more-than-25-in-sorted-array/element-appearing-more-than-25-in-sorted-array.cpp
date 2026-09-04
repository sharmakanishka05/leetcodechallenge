class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> m;
        int n=arr.size();
        for(int x:arr){
            m[x]++;

        }
        for(int x:arr){
            if(m[x]>n/4)
            return x;
        }
        return -1;
    }
};