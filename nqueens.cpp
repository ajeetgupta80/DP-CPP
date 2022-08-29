#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

bool ifsafe(int row, int col,vector<string> board, int n)
{
    int duprow = row;
    int dupcol = col;


    while(row>=0 && col>=0)
    {
        if(board[row][col]=='Q')
        return false;

        row--;
        col--;
    }

    col = dupcol;
    row = duprow;
    while(col>=0)
    {
        if(board[row][col]=='Q')
        return false;
        col--;
    }

    row = duprow;
    col= dupcol;
    while(row<n && col>=0)
    {
        if(board[row][col]=='Q')
        reutrn false;
        

    }

}



void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n)
{

   if(col == n)
   ans.push_back(board);
   return;

   for(int row=0; row<n; row++)
   {
    if(ifsafe(row,col,board,n))
    {
        board[row][col]='Q';
        solve(col+1,board,ans,n);
        board[row][col]='.';
    }


   }
}

vector<vector<string>> solvequeen(int n)
{
    vector<string> board(n);
    vector<vector<string>> ans;
    string s(n,'.');
    for(int i=0; i<n; i++)
    {
        board[i]=s;
    }

    solve(0,board,ans,n);
    return ans;
}

int main()
{










}