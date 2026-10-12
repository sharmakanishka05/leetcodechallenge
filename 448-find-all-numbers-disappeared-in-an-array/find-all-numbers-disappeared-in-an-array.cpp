class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

     vector<int> ans;
     int n=nums.size();
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    int m=0;
     for(int i=1;i<=n;i++){
        if(m<n && nums[m]==i)
        m++;
        else
        ans.push_back(i);
        
     }
     return ans;   
    }
};