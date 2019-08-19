#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
int partition ( int A[],int start ,int end) {
    int i = start + 1;
    int piv = A[start] ;
    for(int j =start + 1; j <= end ; j++ )  {

          if ( A[ j ] < piv) {
                 swap (A[ i ],A [ j ]);
            i += 1;
        }
   }
   swap ( A[ start ] ,A[ i-1 ] ) ;
   return i-1;
}

void quick_sort ( int A[ ] ,int start , int end ) {
   if( start < end ) {
         int piv_pos = partition (A,start , end ) ;
         quick_sort (A,start , piv_pos -1);
         quick_sort ( A,piv_pos +1 , end) ;
   }
}
int main()
{
    int n, m, i, j, k, l;
    cin>>n;
    int a[n+2];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    quick_sort(a, 1, n);
    for(i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
