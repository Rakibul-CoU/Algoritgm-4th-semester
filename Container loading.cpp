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
    int n,i,j,w,capacity,total,k,temp;
    vector< pair <int,int> > v ;
    vector <int > arr[2];

    cout << " Enter the number of Containers" << endl;
    cin >> n ;
    int selected[n+3]= {0};


    cout << " Enter the weight of the Containers one by one " << endl;
    for(i=0; i<n; i++)
    {
        cin >> w ;
        v.push_back(  make_pair(w,i+1)  );
    }

    cout << "Enter Maximum Capacity" << endl;
    cin >> capacity ;
    temp=capacity;

    sort( v.begin(),v.end() );

    i=n-1;
    total=0;
    while(i>=0  )
    {
        if(v[i].first<=capacity)
        {
            capacity-=v[i].first;
            if(capacity>=0)
            {
                arr[0].push_back(v[i].first);
                // cout << v[i].first<< "  " ;
                total++;
            }
        }

        if(capacity<0)
            break;
        i--;
    }

    i=0;
    capacity=temp;
    while(i<n )
    {
        if(v[i].first<=capacity)
        {
            capacity-=v[i].first;
            if(capacity>=0)
            {
                arr[1].push_back(v[i].first);
            }

        }

        if(capacity<0)
            break;
        i++;

    }
    i=arr[1].size();

    if(i>total)
    {
        k=i;
    }
    else
        k=total;

    cout << "Total number of containers  = "  << k << endl;
    cout << "The used containers are  =   " ;

    if(k==i)
        for(i=0; i<k; i++)
            cout << arr[1][i] << " " ;
    else
        for(i=0; i<k; i++)
            cout << arr[0][i] << " " ;


    return 0;
}
