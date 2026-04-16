class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string pure_alnum = "";
        
       
        for (char i : s) {
            if (std::isalnum(i)) {
                pure_alnum += std::tolower(i);
            }
        }

     
        int left = 0;
        int right = (int)pure_alnum.size() - 1;
        while (left < right) {
            if (pure_alnum[left] != pure_alnum[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
