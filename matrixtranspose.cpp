//given a sq matrix a and its number of rows/columns return the transpose of A . the transpose matrix is the matrix flippped over its main diagonal , switching the row and column indices of matrix.
// 123   147
// 456   258
// 789   369
//swap row,coll=col,row
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

     for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){      //1st
            swap(arr[i][j],arr[j][i]);
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}