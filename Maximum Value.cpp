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
    cin>>n;
    int a[n+2];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int res=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>res)
            res=a[i];
    }
    cout<<res<<endl;
    return 0;
}
