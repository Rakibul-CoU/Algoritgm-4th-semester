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
    int temp;
    for(i=0; i<n; i++)
    {
        for(k=i+1; k<n; k++)
        {
            if(a[i]>a[k])
            {
                temp=a[i];
                a[i]=a[k];
                a[k]=temp;
            }
        }
    }
    cout<<"Minimum Number: "<<a[0]<<endl;
    cout<<"Maximum Number: "<<a[n-1]<<endl;
    return 0;
}
