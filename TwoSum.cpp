// https://leetcode.com/problems/two-sum/solutions/4170755/c/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Variables
        vector<int> output; // For Output Later
        int size = nums.size(); // Needed for looping through vector
        bool done = false; // Just a little boolean for breaking
        
        for(int i = 0; i < size; i++) { // Grab a number (will do all the nums)
            for(int e = 0; e < size; e++){ // Compare grabbed number to every other number
                if(i == e) {continue;} // If the index is the same, continue on (wont look at next if statement)
                if(nums[i] + nums[e] == target){ // Brute force to check each number to see if it adds up to target
                    output.push_back(i); // Store the index of the first number
                    output.push_back(e); // Store the index of the second number
                    done = true; // Save a variable that denotes the code as done
                }
            }
            if(done == true) {break;} // Check to see if we found everything we need
        }
        return output; // Return the computed output
    }
};
