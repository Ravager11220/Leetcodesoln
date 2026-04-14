class Solution {
public:
    bool isTrionic(std::vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false; // There must be at least three elements
        
        int i = 0;

        // Step 1: Find the first increasing segment
        while (i < n - 1 && nums[i] < nums[i + 1]) {
            i++;
        }

        // Ensure we found a strictly increasing segment and not at the edges
        if (i <= 0 || i >= n - 1) return false;

        // Step 2: Find the strictly decreasing segment
        while (i < n - 1 && nums[i] > nums[i + 1]) {
            i++;
        }

        // Ensure we found a strictly decreasing segment
        if (i <= 0 || i >= n - 1) return false;

        // Step 3: Find the last strictly increasing segment
        while (i < n - 1 && nums[i] < nums[i + 1]) {
            i++;
        }

        // Check if we have reached the end of the array
        return i == n - 1; // Must reach the last element
    }
};
