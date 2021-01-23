#include<iostream>
using namespace std;


bool findemptylocation(int board[][9], int &row, int &col)
{
    for(int i = 0; i<9; i++)
    {
        for( int j = 0; j<9; j++)
        {
            if(board[i][j] == 0)
            {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}
bool isSafe(int board[][9], int row, int col, int num)
{
    for(int i = 0; i<9; i++)
    {
        if(board[row][i] == num)
        {
            return false;
        }
    }
    
    for(int i = 0; i<9; i++)
    {
        if(board[i][col] == num)
        {
            return false;
        }
    }
    
    int row_f = row - (row%3);
    int col_f = col - (col%3);
    for(int i = 0; i<3; i++)
    for(int j = 0; j<3; j++)
    {
        if(board[i+row_f][j+col_f] == num)
        {
            return false;
        }
    }
    
    return true;
}

bool sudokuSolver(int board[][9]){
    
    int row,col;
    if(!findemptylocation(board, row, col))
       return true;
       
       for( int i = 1; i <= 9; i++)
       {
           if(isSafe(board,row,col,i))
           {
               board[row][col] = i;
               if(sudokuSolver(board))
               {
                   return true;
               }
               board[row][col] = 0;
           }
       }
       return false;
}

int main(){

  int n = 9; 
  int board[9][9];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> board[i][j];
        }		
  }
  cout<<endl;
  if(sudokuSolver(board)){
	cout << "true";
	 cout<<endl;
	for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
cout<<board[i][j]<<" ";
}
cout<<endl;
}	
  }else{
	cout << "false";	
  }
  cout<<endl;

}

