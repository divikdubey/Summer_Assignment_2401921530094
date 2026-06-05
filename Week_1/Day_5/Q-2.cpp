class Solution {
public:
    void reverseString(vector<char>& s) {

        // Left pointer at beginning
        int begin = 0;
        // Right pointer at end
        int end = s.size() - 1;
        // Keep swapping until pointers meet
        while (begin < end) {
            // Swap characters
            swap(s[begin], s[end]);
            // Move pointers inward
            begin++;
            end--;
        }
    }
};