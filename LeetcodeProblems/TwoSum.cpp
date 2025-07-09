// https://leetcode.com/problems/two-sum/solutions/4170755/c/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // Given an array of integers nums and an integer target
        vector<int> indices; 
        unsigned int count = nums.size();
        
        for(unsigned int orig = 0; orig < count; orig++) 
        { 
            for(unsigned int comp = 0; comp < count; comp++)
            { 
                // return indices of the two numbers such that they add up to target.
                // and you may not use the same element twice.
                if((nums[orig] + nums[comp] == target) && (orig != comp))
                { 
                    indices.push_back(orig); 
                    indices.push_back(comp);
                    // You may assume that each input would have exactly one solution 
                    return indices;
                }
            }
        }
        return indices; // Should never get hit as we should always have one solution
    }
};
