class Solution {
public:
    bool isSafe(vector<string>& board,int row,int col,int n){
        //horizontal check
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q'){
                return false;
            }
        }
        //vertical check
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        //left diagonal
        int r=row;
        int c=col;
        while(r>=0 && c>=0){
            if(board[r][c]=='Q'){
                return false;
            }
            r--;
            c--;
        }
        //right diagnol
        int ro=row;
        int co=col;
        while(ro>=0 && co<n){
            if(board[ro][co]=='Q'){
                return false;
            }
            ro--;
            co++;
        }
        return true;
    }
    void NQueen(vector<string>& board,int row,int n,vector<vector<string>>& ans){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(isSafe(board,row,i,n)){
                board[row][i]='Q';
                NQueen(board,row+1,n,ans);
                board[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>ans;
        NQueen(board,0,n,ans);
        return ans;
    }
};