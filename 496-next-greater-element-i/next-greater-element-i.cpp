class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
            int max=nums1[i];
           for(int j=0;j<n2;j++){
            if(nums2[j]==max){
                int k=j+1;
                while(k<n2 && nums2[k]<=max){
                    k++;
                }
                if(k<n2){
                ans.push_back(nums2[k]);}
                else
                ans.push_back(-1);

                break;
            }
            }
           }
        return ans;
        
    }
};