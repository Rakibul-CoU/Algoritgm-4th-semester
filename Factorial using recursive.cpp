#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
unsigned int factorial(unsigned int n)
{
    if (n == 0)
    return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num;
    cin>>num;
    cout<<factorial(num)<< endl;
    return 0;
}
