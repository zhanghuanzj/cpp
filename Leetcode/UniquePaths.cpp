class Solution {
public:
    int uniquePaths(int m, int n) {
        if(n<1||m<1) return 0;
        vector<int> dp(n,1);
        for(int i=1;i<m;++i){
            for(int j=1;j<n;++j){
                dp[j] += dp[j-1];
            }
        }
        return dp[n-1];
    }
};