#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
int main()
{
    int n, m, i, j, k, l, row, col;
    cin>>row>>col;
    int a[row+2][col+2], b[row+2][col+2], c[row+2][col+2];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<c[i][j]<<" ";
            if(j==col-1)
                cout<<endl;
        }
    }
    return 0;
}
