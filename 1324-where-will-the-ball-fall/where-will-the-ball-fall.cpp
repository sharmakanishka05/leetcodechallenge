class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ans;
        int m = grid.size();
        int n = grid[0].size();
       
        for (int ball = 0; ball < n; ball++) {
            int i = 0;
            int j = ball;
             bool fall = false;
            while (i < m && j < n) {
                if (grid[i][j] == 1) {
                    if (j == n-1 || grid[i][j + 1] == -1 ) {
                        fall = true;
                        break;
                    }
                    j++;
                } else if(grid[i][j]==-1) {
                    if (j == 0 || grid[i][j - 1] == 1) {
                        fall = true;
                        break;
                    }
                    j--;
                }
                i++;
            }
             if (fall == false)
                ans.push_back(j);

            else
                ans.push_back(-1);
        }
           return ans;
        }
    };