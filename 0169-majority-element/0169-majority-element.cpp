class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int count = 1;  // Count the current element itself
            for (int j = i + 1; j < n; j++) {  // Start checking from the next element
                if (nums[j] == nums[i]) {
                    count++;
                }
            }
            if (count > n / 2) {
                return nums[i];
            }
        }
        return -1;  // This case will never happen since the problem guarantees a majority element.
    }
};
