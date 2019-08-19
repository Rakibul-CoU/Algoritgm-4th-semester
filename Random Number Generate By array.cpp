#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int random[26];
    srand((unsigned)time(NULL));
    for (int i = 1; i < 26; i++)
    {
        random[i] = 1+ rand() % 10;
        cout << random[i] << endl;
    }
    return 0;
}
