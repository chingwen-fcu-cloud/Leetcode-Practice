class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int64_t m = grid.size(), n = grid[0].size(), MOD=1e9+7;
        int64_t max_min[m][n][2];
        int64_t temp = max_min[0][0][0]=max_min[0][0][1]=grid[0][0];
        //First row's value
        for(int i=1; i<n; i++){
            temp *= grid[0][i];
            max_min[0][i][0] = max_min[0][i][1] = temp;
        }
        temp = grid[0][0];
        //First column's value
        for(int i=1; i<m; i++){
            temp *= grid[i][0];
            max_min[i][0][0] = max_min[i][0][1] = temp;
        }
        //Find every grid's Max and min from row to row
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                int64_t x=grid[i][j];
                int64_t a = x * max_min[i][j-1][0];
                int64_t b = x * max_min[i][j-1][1];
                int64_t c = x * max_min[i-1][j][0];
                int64_t d = x * max_min[i-1][j][1];
                int64_t mn = min(min(a, b), min(c, d));
                int64_t mx = max(max(a, b), max(c, d));
                max_min[i][j][0] = mn;
                max_min[i][j][1] = mx;
            }
        }
        int64_t ans = max_min[m-1][n-1][1];
        return ans<0?-1:(int)(ans%MOD);
    }
};
/*
用3維的矩陣存每格的最大最小值，M X N 大小的矩陣中，每格為上面一格(i-1)和左邊一格(j-1)的最大最小值中乘上該格數值，最後比大小，
簡單來說，找出每格的值，然後比大小
*/