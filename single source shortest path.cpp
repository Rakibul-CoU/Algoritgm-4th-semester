#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;

int main(){
    int i, j, k, l, m;
    vector <int> vec [2000],dis[2000];
    int vec1[2000], u, v, w, edg,node;
    cin >> edg>>node;

    for(i=0; i<edg + 2; i++){

        vec[i].clear();
        dis[i].clear();
    }

   for(i = 0; i < edg; i++){
        cin >> u >> v >> w;

        vec[i].push_back(u);
        vec[i].push_back(v);
        vec[i].push_back(w);
   }

    dis[1] = 0;
    for(i = 0; i < edg - 1; i++){
        j = 0;
        while(vec[j].size() != 0){

            if(dis[ vec[j][0]  ] + vec[j][2] < dis[ vec[j][1] ] ){
                dis[ vec[j][1] ] = dis[ vec[j][0]  ] + vec[j][2];
            }
            j++;
        }
        //cout<<dis[ vec[i][j] ]<<" ";
    }
    for(i = 1; i <= node; ++i)
    {
        //cout << "Adjacency list of node " << i << ": ";
        for(j = 0; j < dis[i].size(); ++j)
        {
            if(j == dis[i].size() - 1)
                cout << dis[i][j] << endl;
            else
                cout << dis[i][j] << " --> ";
        }
    }
    cout << endl;
    for(i=1; i<edg; i++){
        if(dis[i] != 0 && dis[i] != 2e9){
            cout << "1 - "<<i << " cost: " << dis[i] << endl;
        }
    }
}


/*
11 6
1 2 50
2 3 10
1 3 45
1 4 10
4 1 20
4 5 15
2 4 15
5 2 20
6 5 3
5 3 35
3 5 30

1 - 2 cost: 45
1 - 3 cost: 45
1 - 4 cost: 10
1 - 5 cost: 25

*/
