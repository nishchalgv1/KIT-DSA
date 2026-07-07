class Solution {
    void solve(vector<vector<int>>& maze, int row, int col, string path, vector<string>& finalOutput, int n, int m, 
    vector<vector<bool>>& visited){
        if(row < 0 || col < 0 || row >= n || col >= m || maze[row][col] == 0 || visited[row][col] == true){
            return;
        }
        
        if(row == n - 1 && col == m - 1){
            finalOutput.push_back(path);
            return;
        }
        
        visited[row][col] = true;
        
        // make 4 calls in 4 directions
        solve(maze, row - 1, col, path + 'U', finalOutput, n, m, visited);
        solve(maze, row, col - 1, path + 'L', finalOutput, n, m, visited);
        solve(maze, row, col + 1, path + 'R', finalOutput, n, m, visited);
        solve(maze, row + 1, col, path + 'D', finalOutput, n, m, visited);
        
        visited[row][col] = false;
        
    }
    
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        int m = maze[0].size();
        
        vector<string> finalOutput;
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        
        string path = ""; // one particular path
        solve(maze, 0, 0, path, finalOutput, n, m, visited);
        sort(finalOutput.begin(), finalOutput.end());
        
        return finalOutput;
        
    }
};