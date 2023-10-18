// https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Variables
        int output; // For Output Later
        int size = nums.size(); // Needed for looping through vector

        sort(nums.begin(),nums.end()); // Sort vector to easily find duplicates (Helps with bigger inputs)
        for(int i=0; i < size-1; i++) { // Loop through all the items (But the last one since we will be accessing two items at a time
            if(nums[i] == nums[i+1]) // If two items next to each other are the same
                output = nums[i]; // We found the duplicate!
        }
        
        return output; // Return the computed output
    }
};
