class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> past;
        for(int i : nums){
            if (past.find(i)==past.end()){
                past[i]=1;
                

            }
            else {
                return true;

            }
        }
        return false;
        
    }
};
