class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mp;
        for (int x : arr) {
            mp[x]++;
        }
        int max = 0;
        for (auto it : mp) {

           if(it.first==it.second && max<it.first)
           max=it.first;
            
        }

        return max==0 ? -1 : max;
    }
};