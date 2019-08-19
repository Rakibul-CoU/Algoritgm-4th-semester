#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
double doubleRand()
{
    return double(rand()) / (double(RAND_MAX) + 1.0);
}

int main()
{
    cout << "expect 5 numbers within the interval [0.0, 1.0)" << endl;
    for (int i=0; i < 5; i++)
    {
        cout << doubleRand() << "\n";
    }
    cout << endl;
    return 0;
}
