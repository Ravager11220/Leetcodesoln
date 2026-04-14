class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
         std::sort(arr.begin(), arr.end());

        int minDifference = std::numeric_limits<int>::max();
        std::vector<std::vector<int>> finlst;

        
        for (int i = 0; i < arr.size() - 1; i++) {
            int diff = arr[i + 1] - arr[i]; 
            if (diff < minDifference) {
                minDifference = diff; 
                finlst.clear(); 
            }
            if (diff == minDifference) {
                finlst.push_back({arr[i], arr[i + 1]}); 
            }
        }

        return finlst;  
    }
};
