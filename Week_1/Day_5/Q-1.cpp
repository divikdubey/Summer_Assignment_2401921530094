class Solution {
public:
    bool isPalindrome(string s) {
        // Left pointer starting from beginning
        int left = 0;
        // Right pointer starting from end
        int right = s.length()-1;
        // Run until pointer meet or cross
        while(left<right){
            // Skip non-alphanumeric characters from left side
            while(left<right && !isalnum(s[left])){
                left++;
            }
            // Skip non-alphanumeric characters from right side
            while(left<right && !isalnum(s[right])){
                right--;
            }
            // Convert both characters to lowercase and compare
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};