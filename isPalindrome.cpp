// https://leetcode.com/problems/palindrome-number/submissions/
class Solution {
public:
    bool isPalindrome(int x) {
        // Laziest Solution I could think of
        string xstr = to_string(x); // Make input into string
        string reverse_x; // Make a variable to store reversed string
        for(int i = xstr.size()-1; i >= 0; i--) { // Loop backwards through the given input
            reverse_x += xstr[i]; // Append each number into the string in intended order
        }
        return xstr == reverse_x; // Return a boolean that compares the two
    }
};
