#include<bits/stdc++.h>
///...................................*****.................................................///
///        author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
void merge(int a[ ], int start, int mid, int end)
{
    int p = start,q = mid+1;

    int arr[end-start+1], k=0;

    for(int i = start ; i <= end ; i++)
    {
        if(p > mid)
            arr[ k++ ] = a[ q++] ;

        else if ( q > end)
            arr[ k++ ] = a[ p++ ];

        else if( a[ p ] < a[ q ])
            arr[ k++ ] = a[ p++ ];

        else
            arr[ k++ ] = a[ q++];
    }
    for (int p=0 ; p< k ; p ++)
    {
        a[ start++ ] = arr[ p ] ;
    }
}

void merge_sort (int a[ ], int start, int end )
{
    if( start < end )
    {
        int mid = (start + end ) / 2 ;
        merge_sort (a, start, mid ) ;
        merge_sort (a,mid+1, end ) ;
        merge(a,start, mid, end );
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
    merge_sort(a, 0, n-1);
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
