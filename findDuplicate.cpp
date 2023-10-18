// https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int output;
        int size = nums.size();

        sort(nums.begin(),nums.end());
        for(int i=0; i < size-1; i++) {
            if(nums[i] == nums[i+1])
                output = nums[i];
        }
        
        return output;
    }
};
