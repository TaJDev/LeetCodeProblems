// https://leetcode.com/problems/two-sum/solutions/4170755/c/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output; 
        int size = nums.size();
        bool done = false;
        
        for(int i = 0; i < size; i++) {
            for(int e = 0; e < size; e++){
                if(i == e) {continue;} 
                if(nums[i] + nums[e] == target){
                    output.push_back(i);
                    output.push_back(e); 
                    done = true; 
                }
            }
            if(done == true) {break;}
        }
        return output;
    }
};
