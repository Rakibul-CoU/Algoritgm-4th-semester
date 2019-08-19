#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
int knapsack(int n,int m,int val[],int weight[])
{
    int k[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            ///IF THERE IS NO ITEM OR NO BAG THEN THIS CONDITION WORK..
            if(i==0||j==0)
            {
                k[i][j]=0;
            }
            else if(weight[i-1]<=m)
            {
                k[i][j]=max(val[i-1]+k[i-1][j-weight[i-1]],k[i-1][j]);
            }
            else
                k[i][j]=k[i-1][j];
        }
    }
    return k[n][m];
}

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int val[n+1],weight[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>val[i]>>weight[i];
    }
    int res=knapsack(n,m,val,weight);
    cout<<res<<endl;
    return 0;
}
