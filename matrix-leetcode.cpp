#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {

       for(int i =0; i<matrix.size(); i++)
       {
        for(int j =0; j<matrix[0].size(); j++)
        {
            if(matrix[i][j]==target)
            {
                return 1;
            }
        }
       }
       return 0;
    }
int main()
{
    int target = 50;
    vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchMatrix(mat,target);



}