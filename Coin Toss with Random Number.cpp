#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;

int flip( )
{
    int i = rand() % 2;

    if (i == 0)
        return 0;
    else
        return 1;
}
int main()
{
    int side;
    int toss;
    int heads = 0;
    int tails = 0;

    for ( toss=1; toss <=3; toss++ )
    {
        printf( "%d\n", flip( ));

        if (flip( ) == 0)
            heads++;
        else
            tails++;

    }
    printf( "heads was flipped %d times\n", heads );
    printf( "tails was flipped %d times\n", tails );

    return 0;

}
