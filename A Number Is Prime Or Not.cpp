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
    int n, i, flag = 0;
    cin>>n;
    for(i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
      cout<<"Not Prime"<<endl;
    }
    else
    {
        if (flag == 0)
          cout<<n<<" Is Prime"<<endl;
        else
          cout<<n<<" Is Not Prime"<<endl;
    }
    return 0;
}
