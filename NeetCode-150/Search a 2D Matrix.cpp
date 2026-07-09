class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //check targetagainst last element of each internal list
        //have tp oterate through each list last element
        vector<int> f_l;
        for (vector<int> i : matrix){
            int l_i=i.size()-1;
            if (target<=i[l_i]){
                f_l=i;
                break;
            }      
        }
        for(int i: f_l){
            if (i==target){
                return true;
            }
        }
        return false;
    }
};
