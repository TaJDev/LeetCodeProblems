// https://leetcode.com/problems/palindrome-number/submissions/
class Solution {
public:
    bool isPalindrome(int x) {
        string xstr = to_string(x);
        string reverse_x;
        for(int i = xstr.size()-1; i >= 0; i--) {
            reverse_x += xstr[i];
        }
        return xstr == reverse_x;
    }
};
