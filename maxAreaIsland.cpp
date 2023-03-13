class Solution {
public:
    void dfs(vector<vector<int>>&grid,int n,int m,int &ans,int i,int j){
        if((i<0 or j<0) or (i==n or j==m)) return;
        if(grid[i][j]!=0){
            ans++;
            grid[i][j]=0;
            dfs(grid,n,m,ans,i++,j);
            dfs(grid,n,m,ans,i--,j);
            dfs(grid,n,m,ans,i,j++);
            dfs(grid,n,m,ans,i,j--);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans0 = 0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                int ans = 0;
                dfs(grid,n,m,ans,i,j);
                ans0 = max(ans,ans0);
            }
        }
        return ans0;
    }
};
