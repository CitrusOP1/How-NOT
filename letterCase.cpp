class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        int l = s.length();
        int ss = 0;
        vector<string>ans;
        combi(l,ss,s,ans);
        return ans;
    }
    void combi(int l,int& ss, string s,vector<string>&ans){

        if(ss==l){
            ans.push_back(s);
            return;
        }
        if(s[ss]<='9' || s[ss]>='0'){
            combi(l,ss+=1,s,ans);
        }
        else{
            s[ss]=(char)(toupper(s[ss]));
            combi(l,ss+=1,s,ans);
            s[ss]=(char)(tolower(s[ss]));
            combi(l,ss+=1,s,ans);
            return;
        }
    }
};
