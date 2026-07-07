class Solution {
    bool isSafe(vector<string>& board, int row, int col, int n){
        // check in the same row
        for(int j = 0; j < n; j++){
            if(board[row][j] == 'Q'){
                return false;
            }
        }

        // check in the same col, row will change
        for(int i = 0; i < n; i++){
            if(board[i][col] == 'Q'){
                return false;
            }
        }

        // check in the upper left diagonal
        int i = row;
        int j = col;
        while(i >= 0 && j >= 0){
            if(board[i][j] == 'Q') return false;
            i--;
            j--;
        }

        // check in the uppper right diagonal
        i = row, j = col;
        while(i >= 0 && j < n){
            if(board[i][j] == 'Q') return false;
            i--;
            j++;
        }
        return true;
    }

    void solve(vector<string>& board, int row, vector<vector<string>> &finalOutput, int n){
        // base case
        if(row == n){
            finalOutput.push_back(board);
            return;
        }

        // try place N Queens one by one in every row
        for(int col = 0; col < n; col++){
            if(isSafe(board, row, col, n)){
                board[row][col] = 'Q';
                solve(board, row + 1, finalOutput, n);
                // backtrack
                board[row][col] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        // create the board
        vector<string> board(n, string(n, '.'));

        vector<vector<string>> finalOutput;

        solve(board, 0, finalOutput, n);

        return finalOutput;
    }
};