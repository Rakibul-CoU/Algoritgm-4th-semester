#include<bits/stdc++.h>
using namespace std;
void res(int a[], int n)
{
    double val = 0;
    sort(a, a+ n);
    cout <<"Order :";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
            sum += a[j];
            cout<<sum<<endl;
        val += sum;
        cout<<val<<endl;
    }
    val /= n;
    cout << "MRT: " << val;
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
    res(a, n);
    return 0;
}
