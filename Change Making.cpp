#include<bits/stdc++.h>
using namespace std;
int minCoins(int coins[], int m, int V)
{
   if (V == 0) return 0;
   int res = INT_MAX;
   for (int i=0; i<m; i++)
   {
     if (coins[i] <= V)
     {
         int sub_res = minCoins(coins, m, V-coins[i]);
         if (sub_res != INT_MAX && sub_res + 1 < res)
            res = sub_res + 1;
     }
   }
   return res;
}

int main()
{
    int n, value, i, j, k, l;
    cin>>n>>value;
    int coin[n+2];
    for(i=0; i<n; i++)
    {
        cin>>coin[i];
    }
    cout << "Minimum coins required is "
         << minCoins(coin, n, value);
    return 0;
}
