#include<bits/stdc++.h>

using namespace std;

#define lli long long int

map<lli,lli> mp;

int main()
{
    lli n,mx=0,p=0;
    cin>>n;
    lli a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        lli v=a[i];
        mp[v]++;
        if(mp[v]>mx)
        {
            p=a[i];
            mx=mp[v];
        }
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==p)
        {
            s=i;
            break;
        }
    }
    cout<<n-mx<<endl;
    for(int i=s-1;i>=0;i--)
    {
        if(a[i]>p)
        {
            cout<<"2 "<<i+1<<" "<<i+2<<endl;

        }
        else if(a[i]<p)
        {
            cout<<"1 "<<i+1<<" "<<i+2<<endl;
        }
    }
    for(int i=s+1;i<n;i++)
    {
        if(a[i]>p)
        {
            cout<<"2 "<<i+1<<" "<<i<<endl;

        }
        else if(a[i]<p)
        {
            cout<<"1 "<<i+1<<" "<<i<<endl;
        }
    }
    return 0;
}
