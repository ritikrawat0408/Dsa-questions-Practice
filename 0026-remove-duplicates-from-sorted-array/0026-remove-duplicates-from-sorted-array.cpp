class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr=0, uniquecatcher=1;
        for(int i=0;uniquecatcher<nums.size();i++){
            if(nums[uniquecatcher]==nums[ptr]){
                uniquecatcher++;
            }else{
                swap(nums[uniquecatcher],nums[ptr+1]);
                ptr++,uniquecatcher++;
            }
        }
        return ptr + 1;;
    }
};