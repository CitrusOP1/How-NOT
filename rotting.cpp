//https://leetcode.com/problems/rotting-oranges/solutions/?envType=study-plan&id=algorithm-i

class Solution {
public:
    void bfs(vector<vector<int>>g,int n,int m,int i,int j,bool flag,int min){
        
        if(j+1<m && g[i][j+1]==1){
            g[i][j+1]=2;flag = true;}
        if(i+1<n && g[i+1][j]==1){
            g[i+1][j]=2;flag = true;
        }if(i-1>=0 && g[i-1][j]==1){
            g[i-1][j]=2;flag = true;
        }
        if(j-1>=0 && g[i][j-1]==1){
            g[i][j-1]=2;flag = true;
        }
        if(flag==true)min+=1;
        return;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int min = 0;
        int ans=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                bool flag = false;
                if(grid[i][j]==0) continue;
                if(grid[i][j]==2){
                    bfs(grid,n,m,i,j,flag,min);
                     ans+=min;
                }
            }
        }
        return min;
    }
};
  
