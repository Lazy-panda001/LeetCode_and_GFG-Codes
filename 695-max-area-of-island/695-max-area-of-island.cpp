class Solution {
public:
    
    int dfs(int i, int j, vector<vector<int>>& grid)
    {
        if(i <0 or i >= grid.size() or j<0 or j>= grid[0].size() or grid[i][j] != 1)
            return 0;
      
        
        grid[i][j] = 0;
        
        return 1 + dfs(i+1,j,grid) + dfs(i-1,j,grid) + dfs(i,j+1,grid) + dfs(i,j-1,grid);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        
        int row = grid.size();
        int col = grid[0].size();
     
        int max_area = 0;
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j] == 1)
                {
                    
                    max_area = max(max_area, dfs(i,j,grid));
                }
            }
        }
        
        return max_area;
    }
};