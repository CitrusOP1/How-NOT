// https://leetcode.com/problems/combinations/description/?envType=study-plan&id=algorithm-i
class Solution {
public:
    void help(vector<int>&sub,vector<vector<int>>&st,int n,int k,int i){

        if(i>n){
            if(k==0){
                st.push_back(sub);
            }
                return;
        }
        sub.push_back(i);
        help(sub,st,n,k-1,i+1);
        sub.pop_back();
        help(sub,st,n,k,i+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>sub;
        help(sub,ans,n,k,1);
        return ans;
    }
};
