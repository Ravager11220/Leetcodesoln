class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groupedList;
        for(const auto &s : strs){
            string sortedString = s;
            sort(sortedString.begin(), sortedString.end());
            groupedList[sortedString].push_back(s);
        }

        vector<vector<string>> result;
        for(const auto &g : groupedList){
            result.push_back(g.second);
        }

        return result;
    }
};
