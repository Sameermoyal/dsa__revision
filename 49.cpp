#include<bits/stdc++.h>
using namespace std;
void printPaths(vector<vector<int>>&grid,int i,int j,int row,int col,string path)
{
    if(i==row && j==col)
    {
        cout<<path<<"\n";
        return;
    }
    if(i<=row || j>col || grid[i][j]==0)
    {
        return;
    }
    printPaths(grid,i-1,j,row,col,path+"T");
    printPaths(grid,i,j+1,row,col,path+"R");
    printPaths(grid,i-1,j+1,row,col,path+"D");
}
int main() {
   
    vector<vector<int>> grid = {
        {1, 0, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    int row = grid.size();//3
    int col = grid[0].size();//3
    printPaths(grid, 2, 1, 0, 2, "");
    return 0;
}