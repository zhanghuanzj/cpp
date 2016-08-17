class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        if(grid.empty()) return 0;
        int n = grid.front().size();
        vector<int> dp(n);
        dp[0] = grid[0][0];
        for(int i=1;i<n;++i){
            dp[i] = dp[i-1]+grid[0][i];
        }
        for(int i=1;i<grid.size();++i){
            for(int j=0;j<n;++j){
                if(j==0) dp[j] += grid[i][j];
                else{
                    dp[j] = min(dp[j],dp[j-1])+grid[i][j];
                }
            }
        }
        return dp[n-1];
    }
};