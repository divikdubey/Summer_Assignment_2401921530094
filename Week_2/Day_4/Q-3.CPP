class Solution {
public:
    void helper(vector<string>&v,int n,int OC,int CC,string s){
        if(OC==n && CC==n){
            v.push_back(s);
            return;
        }
        if(OC<n){
            helper(v,n,OC+1,CC,s+"(");
        }
        if(CC<OC){
            helper(v,n,OC,CC+1,s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        int OC=0,CC=0;
        helper(v,n,OC,CC,"");
        return v;
    }
};