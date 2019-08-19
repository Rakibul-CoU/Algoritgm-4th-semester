#include<bits/stdc++.h>
using namespace std;
int mid,low,high,n,pos=-1,number;
void Binary_search(int a[ ])
{
    low=0;high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==number)
        {
            pos=mid;
            break;
        }
        else if(a[mid]<number)
        {
            low=mid+1;
        }
        else
            high=mid-1;
    }
}

int main()
{
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cin>>number;
    Binary_search(a);
    if(pos==-1){
        cout<<endl<<"THE ELEMENTS HAVE NOT BEEN FOUND";
    }
    else{
        cout<<endl<<"THE ELEMENT ARE IN THE "<<pos+1<<" position"<<endl;
    }
    return 0;
}
