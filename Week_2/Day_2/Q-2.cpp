class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         if(s1.length()>s2.length())
        {
            return false;
        }
        vector<int>s1Count(26,0);
        vector<int>window(26,0);
        for(int c:s1){
            s1Count[c-'a']++;
        }
        int k = s1.length();
        for(int i=0;i<k;i++){
            window[s2[i]-'a']++;
            if(window==s1Count) return true;
        }
        for(int i=k;i<s2.size();i++){
            window[s2[i]-'a']++;
            window[s2[i-k]-'a']--;
            if(window==s1Count) return true;
        }
        return false;
    }
};