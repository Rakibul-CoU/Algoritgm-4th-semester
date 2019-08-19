#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
void insertion_sort ( int a[ ], int n)
{
    for( int i = 0 ; i < n ; i++ )
    {
        int temp = a[ i ];
        int j = i;
        while(  j > 0  && temp < a[ j -1])
        {
            a[ j ] = a[ j-1];
            j= j - 1;

        }
        a[ j ] = temp;
    }
}
int main()
{
    int n, m, i, j, k, l;
    cin>>n;
    int a[n+2];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    insertion_sort(a,n);
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
