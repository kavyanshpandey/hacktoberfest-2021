// given a matrix . write an algo to find that the given value exsists in the matrix or not . integers in each row are sorted in ascending order from left to right . integers in column are sorted in ascending fromn top to bottom.
//given a sq matrix a and its number of rows/columns return the transpose of A . the transpose matrix is the matrix flippped over its main diagonal , switching the row and column indices of matrix.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int key;
    cin >> key;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    int r=0,c=m-1;
    bool flag=false;
    while (r<n && c>=0){
      if (arr[r][c] == key)
            {
            flag=true;
            break;
            }

            else if (arr[r][c] > key)
            {
                c--;
            }
            else{
              r++;
            }
    }
    if(flag){
        cout<<"element found"<<r<<c<<" ";}
    else{
        cout<<"not found";
    }
    
    return 0;
}