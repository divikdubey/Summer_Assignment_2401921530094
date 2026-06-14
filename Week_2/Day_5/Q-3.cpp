class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();

        int i = 0;      // read pointer
        int index = 0;  // write pointer

        while (i < n) {

            char currentChar = chars[i];
            int count = 0;

            while (i < n && chars[i] == currentChar) {
                count++;
                i++;
            }

            chars[index] = currentChar;
            index++;

            if (count > 1) {
                string freq = to_string(count);

                for (char c : freq) {
                    chars[index] = c;
                    index++;
                }
            }
        }

        return index;
    }
};