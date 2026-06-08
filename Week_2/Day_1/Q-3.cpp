class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int CharCount[26] = {0};

        for(char c : magazine) {
            CharCount[c - 'a']++;
        }

        for(char c : ransomNote) {
            if(CharCount[c - 'a'] == 0) {
                return false;
            }
            CharCount[c - 'a']--;
        }

        return true;
    }
};