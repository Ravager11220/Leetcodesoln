class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> num_count;
        for (int i : nums) {
            num_count[i]++;
        }
        
        vector<int> ret;
        
       
        while (ret.size() < k) {
            int max_freq = 0;          
            int max_num = 0;           
            
          
            for (const auto& pair : num_count) {
                if (pair.second > max_freq) {
                    max_freq = pair.second;
                    max_num = pair.first;
                }
            }
        
            ret.push_back(max_num);
         
            num_count.erase(max_num);
        }

        return ret;
    }
};   
