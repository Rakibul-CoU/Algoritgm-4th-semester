#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
int prime[300000], nprime;
int mark[1000002];

int sieve(int n, int m)
{
    int i, j, limit=sqrt(m*1.0)+2;
    mark[1]=1;
    for(i=4; i<=m; i+=2)
    {
        mark[i]=1;
    }
    //prime[nprime++]=2;
    for(i=3; i<=m; i++)
    {
        if(!mark[i])
        {
            //prime[nprime++]=i;
            if(i<=limit)
            {
                for(j=i*i; j<=m; j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }
}
int main()
{
    int n, m, i, j, k, l;
    cin>>n>>m;
    sieve(n,m);

    for(i=n; i<=m; i++)
    {
        if(!mark[i])
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
