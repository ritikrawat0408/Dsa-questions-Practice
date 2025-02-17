class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int index = 0;
        
        //storing the non zero elmnts in result array
        for(int i = 0;i < n;++i){
            if(nums[i] != 0){
                result[index] = nums[i];
                index++;
            }
        }
        //filling the leftover indexes in result with 0
        for(int i = index;i < n;++i){
            result[i] = 0;
        }
        //copy the result array to the original array
        for(int i =0 ; i < n;++i){
            nums[i] = result[i];
        }
        
    }
};