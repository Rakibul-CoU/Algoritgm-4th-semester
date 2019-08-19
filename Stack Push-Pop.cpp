#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
void showstack(stack<int>s)
{
    while(!s.empty())
    {
        cout<<" "<<s.top();
        s.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int>s;
    int n, m, i, j, k, l;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        s.push(m);
    }
    cout<<"The Stack Is: ";
    showstack(s);
    cout<<endl;
    cout<<"s.size() : "<<s.size()<<endl;
    cout<<"s.top() : "<<s.top()<<endl;
    s.pop();
    showstack(s);
    return 0;
}
