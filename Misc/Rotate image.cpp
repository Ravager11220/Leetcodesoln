class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        vector<vector<int>> rv;
        for (int i=0;i<n;i++){
            vector<int> templ;
            for (int j=0;j<n;j++){
                int r=n-1-j;
                templ.push_back(matrix[r][i]);
            }
            rv.push_back(templ);
        }
        matrix=rv;
        
    }   
};
