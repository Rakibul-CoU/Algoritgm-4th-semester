#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;

int CoinChange(int amount, int d[], int size)
{
    if(amount <= 0) return 0;
    int min_coins =(int)INT_MAX;

    for(int i = 0; i < size; i++) {
	if(d[i] <= amount)
	    min_coins = min(min_coins, CoinChange(amount-d[i], d, size) + 1);
    }
    return min_coins;
}

int main()
{
    int n;
    cin>>n;
    int a[n+2];
    int sum;
    cin>>sum;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans = CoinChange(sum, a, n);
    cout << "Minimal # of coins = " << ans << endl;

    return 0;
}
