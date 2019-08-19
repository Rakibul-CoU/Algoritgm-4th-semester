# include <bits/stdc++.h>
# define coinVal 2;

using namespace std;

void gameInfo();
void generateGame();
void playGame();

int coins, counterfeitCoin;
char typeOfCounterfeit;

int main()
{
    gameInfo();
    generateGame();
}

void gameInfo()
{
    cout<<" Enter number coins(max 12) : ";
    cin>>coins;

    cout<<" Press (H) for heavy counterfeit and (L) for light : ";
    cin>>typeOfCounterfeit;
}

void playGame(int coinTab[])
{
    cout<<"\n You will get 3 chance to identify the 'bad' coin ";

    int pan1, pan2, sum1=0, sum2=0, answer;

    for(int i=0 ; i<3 ; i++)
    {
        cout<<"\n Enter number of coins in Pan 1 : ";
        cin>>pan1;

        cout<<"\n Pan 1 = ";
        int input1[pan1];

        int j=0;

        while(j<pan1)
        {
            cin>>input1[j];
            j++;
        }

        cout<<"\n Enter number of coins in Pan 2 : ";
        cin>>pan2;

        cout<<"\n Pan 2 = ";
        int input2[pan2];

        j=0;

        while(j<pan2)
        {
            cin>>input2[j];
            j++;
        }

        for(int k=0; k<pan1; k++)
        {
            sum1 = sum1 + coinTab[input1[k]];
        }

        for(int k=0; k<pan2; k++)
        {
            sum2 = sum2 + coinTab[input2[k]];
        }

        if(sum1>sum2)
        {
            cout<<"\n Pan 1 > Pan 2";
        }

        else if( sum1<sum2)
        {
            cout<<"\n Pan 1 < Pan 2";
        }
        else
        {
            cout<<"\n Pan 1 = Pan 2";
        }
    }

    cout<<"\n Enter answer : ";
    cin>>answer;

    if((answer-1)==counterfeitCoin)
    {
        cout<<"\n Correct Answer";
    }
    else
    {
        cout<<"\n Wrong Answer";
        cout<<"\n Answer is coin number "<<counterfeitCoin+1;
    }
}

void generateGame()
{
    int *coinTable = new int[coins];

    for(int i=0; i<coins; i++)
    {
        coinTable[i] = coinVal;
    }

    srand ( time(NULL) );

    counterfeitCoin = rand() % coins;

    if(typeOfCounterfeit=='H')
    {
        coinTable[counterfeitCoin] = 3;

    }

    else
    {
        coinTable[counterfeitCoin] = 1;
    }

    playGame(coinTable);

}
