#include <bits/stdc++.h>
using namespace std;

void printsudoku(int sudoku[][9]){
    for(int i = 0 ; i<9 ; i++){
        for(int j=0 ; j<9 ; j++){
            cout<<sudoku[i][j] <<" ";
        }
        cout<<endl;
    }
    cout << "--------------------" << endl;
}

bool isSafe(int sudoku[9][9] , int row , int col , int digit){
    //vertical
    for(int i = 0 ; i<9; i++){
        if(sudoku[i][col] == digit){
            return false;
        }
    }
    //horizontal
    for(int j = 0 ; j<9; j++){
        if(sudoku[row][j] == digit){
            return false;
        }
    }
    //3x3 grid
    int startRow = (row/3)*3;
    int startcol = (col/3)*3;

    for(int i = startRow ; i<startRow+3 ; i++){
        for(int j = startcol ; j<startcol+3 ; j++){
            if(sudoku[i][j] == digit){
                return false;
            }
        }
    }
    return true;
}

bool sudokusolver(int sudoku[9][9],int row , int col ){

    //base case
    if(row==9){
        printsudoku(sudoku);
        return true;
    }
    int newrow = row;
    int newcol = col + 1;
    if(newcol == 9){
        newrow = row+1;
        newcol = 0;
    }
    if(sudoku[row][col] != 0){
        return sudokusolver(sudoku , newrow , newcol);
    }

    for(int digit=1 ; digit<=9 ; digit++){
        if(isSafe(sudoku, row , col , digit)){
            sudoku[row][col] = digit;
            if(sudokusolver(sudoku , newrow , newcol)){
                return true;
            }
            sudoku[row][col]=0; //backtrack
        }
    }
    return false;
}
int main(){
    int sudoku[9][9] = {{ 0,0,8,0,0,0,0,0,0},{4,9,0,5,1,7,0,0,2},{0,0,3,0,0,4,1,9,0},{1,8,5,0,6,0,0,2,0},{0,0,0,0,2,0,0,6,0},{9,6,0,4,0,5,3,0,0},{0,3,0,0,7,2,0,0,4},{0,4,9,0,3,0,0,5,7},{8,2,7,0,0,9,0,1,3}};
    sudokusolver(sudoku , 0 , 0);
    return 0;
}