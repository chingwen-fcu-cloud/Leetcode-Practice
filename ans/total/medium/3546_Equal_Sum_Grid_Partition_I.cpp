class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int64_t> rowSum(m,0), colSum(n,0);
        int64_t total = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                rowSum[i] += grid[i][j];
                colSum[j] += grid[i][j];
                total += grid[i][j];
            }
        }

        if(total%2) return false;

        int64_t half = total/2, sum=0;

        for(int i=0; i<rowSum.size(); i++){
            sum += rowSum[i];
            if(sum == half) return true;
        }
        sum = 0;

        for(int i=0; i<colSum.size(); i++){
            sum += colSum[i];
            if(sum == half) return true;
        }

        return false;
    }
};