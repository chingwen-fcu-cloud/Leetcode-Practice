class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i = 0; i < 4; i++){
            if(mat == target){
                return true;
            }        
            else{
                for(int j = 0; j < mat.size(); j++){
                    for(int k = j+1; k < mat.size(); k++){
                        swap(mat[j][k], mat[k][j]);
                    }
                }
                for (int j = 0; j < mat.size(); j++) {
                    reverse(mat[j].begin(), mat[j].end());
                }
            }
        }
        return false;
    }
};