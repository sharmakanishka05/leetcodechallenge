class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        int count=0;
        int sum=0;
        int minimum = *min_element(salary.begin(), salary.end());
        int maximum = *max_element(salary.begin(), salary.end());
        for(int i=0;i<n;i++){
            if(salary[i]!=minimum && salary[i] != maximum){
                sum=sum+salary[i];
                count++;
            }

        }

      double average=double(sum)/count;
       return average;
    }
};