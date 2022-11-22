#include <bits/stdc++.h>
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;

    for(int column=0; column<mCols; column++)
    {
        //for odd column -> print column bottom to top
        if(column % 2 == 0)
        {
            for(int row=0; row<nRows; row++)
            {
                ans.push_back(arr[row][column]);
            }
        }

        //for even column -> print column top to bottom
        else
        {
            for(int row=nRows-1; row>=0; row--)
            {
                ans.push_back(arr[row][column]);
            }
        }
    }

    return ans;
}
