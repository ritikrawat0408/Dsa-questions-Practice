class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1); // Initialize result array with 1s

        int left = 1;
        // Step 1: Compute left products and store in result
        for (int i = 0; i < n; i++) {
            result[i] = left;  // Store left product
            left *= nums[i];   // Update left product
        }

        int right = 1;
        // Step 2: Multiply with right products
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= right;  // Multiply with right product
            right *= nums[i];    // Update right product
        }

        return result;
    }
};

