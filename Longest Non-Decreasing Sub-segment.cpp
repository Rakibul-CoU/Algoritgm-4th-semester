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
    int n,ans=0;
    cout<<"enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int T[n];        //create a temp array for pre-processing to calculate answer.
    for(int i=0; i<n; i++)
        T[i]=1;         //here we initalise it with 1 bcz every element is itself a non deceasing subsequence

    for(int i=1; i<n; i++)  //here we run two loop one loop start from index 1 and other loop start from  index 0
    {
        for(int j=0; j<i; j++)
        {
            // this loop will check if we found a element that is greater than the previous element
            if(arr[i] > arr[j])
            {
                T[i]=max(T[i],T[j]+1);   //if we found such element then we will update our temp array
                ans=max(ans,T[i]);      // this will store the length of the longest non-decreasing subsequence so far.
            }
        }
    }
    //for(int i=0;i<n;i++)    //uncomment this to print the temp array
    //cout<<T[i]<<" ";
    cout<<"The length of the longest non-decreasing  subsequence is :"<< ans<<endl;
}
