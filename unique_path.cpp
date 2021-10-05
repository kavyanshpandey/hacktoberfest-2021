/*A robot is located at the top-left corner of a m x n grid.
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid
How many possible unique paths are there?*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter the number of rows\n";
    cin >> m;
     cout << "Enter the number of columns\n";
     cin >> n;
     
    vector<vector<int>>dp(m+1 ,vector<int>(n+1));
        
        
        for(int i=0;i< m;i++)
            
            dp[i][0]=1;
        for(int j=0;j<n;j++)
            dp[0][j]=1;
        
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j< n;j++)
            {
                dp[i][j] =   dp[i-1][j] + dp[i][j-1];
                
            }
        }
       cout << "NUmber of possible unique paths is : "<<  dp[m-1][n-1];
        return 0;
        
}
