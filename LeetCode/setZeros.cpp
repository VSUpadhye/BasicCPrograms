//#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

void setZeroes(vector<vector<int>>& matrix){
    int row = 0, col = 0, rsize = matrix.size(), csize = matrix[0].size(), i =0, j = 0;
    vector<int> rowz, colz;

    for (row = 0; row < rsize; row++)
    {
        for (col = 0; col < csize; col++)
        {
            if (matrix[row][col] == 0)
            {
                rowz.push_back(row);
                colz.push_back(col);
            }
        }
    }

    for (i = 0; i < rowz.size(); i++)
    {
        row = rowz[i];
        for (j = 0; j < csize; j++)
        {
            matrix[row][j] = 0;
        }
    }

    for (i = 0; i < colz.size(); i++)
    {
        col = colz[i];
        for (j = 0; j < rsize; j++)
        {
            matrix[j][col] = 0;
        }
    }
}

int main(){
    vector<vector<int>> mat = {{0, 1, 2, 0}, {3, 4, 5, 2},{1, 0, 1, 5}};
    setZeroes(mat);
    return 0;
}