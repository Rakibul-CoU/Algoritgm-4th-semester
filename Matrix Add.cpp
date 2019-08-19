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
    int n, m, i, j, k, l;
    cin>>n>>m;
    int a[n+2][m+2], b[n+2][m+2], c[n+2][m+2]={0};
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<c[i][j]<<" ";
            if(j==m-1)
                cout<<endl;
        }
    }
    return 0;
}
