#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli fun(lli n)
{
    lli i, sum=1;
    for(i=1; i<=n; i++)
    {
        sum*=i;
    }
    return sum;
}
int main()
{
    lli n, m, i, j, k, l, t;
    cin>>t;
    while(t--)
    {
        lli res=0;
        string s;
        cin>>n;
        if(n>19)
        {
            cout<<"0000"<<endl;
            continue;
        }
        res=fun(n);
        //cout<<res<<endl;
        j=0;
        lli a;
        while(res>0)
        {
            a=res%10;
            s+=(a+48);
            j++;
            res=res/10;
        }
        reverse(s.begin(),s.end());
        if(j<4)
        {
            lli xx=4-j;
            for(i=1; i<=xx; i++)
            {
                cout<<"0";
            }
            for(i=0; i<j; i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        else
        {
            lli y, z;
            y=j-4;
            for(i=y; i<j; i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
