class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.length()<p.length())
        return ans;
        vector<int> pCount(26,0);
        vector<int> window(26,0);
        for(int c :p)
        {
            pCount[c-'a']++;
        }
        int k=p.length();
        for(int i=0;i<k;i++)
        {
            window[s[i]-'a']++;
            if(window==pCount)
            {
                ans.push_back(0);
            }
        }
        for(int i=k;i<s.length();i++)
        {
            window[s[i]-'a']++;
            window[s[i-k]-'a']--;
            if(window==pCount)
            {
                ans.push_back(i-k+1);
            }
        }
        return ans;

    }
};