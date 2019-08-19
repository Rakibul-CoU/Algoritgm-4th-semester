#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
void shuffle(int[],int);
int main()
{
    int min, max;
    cout << "Enter minimum integer value of number range: ";
    cin >> min;
    cout << "Enter maximum integer value of number range: ";
    cin >> max;
    // If the values for the range was reversed, swap them.
    if (max < min) {
        int temp = min;
        min = max;
        max = temp;
    }
    int range = (max - min);
    // Create our new array of size "range"
    int *values = new int[range];
    // Load some counting values into our array
    for (int i = 0; i <= range; i++) {
        values[i] = min + i;
    }
    // Now shuffle the array values randomly.
    shuffle(values,range + 1);
    // Spit out the values
    for (int i = 0; i <= range; i++) {
        cout << "Next random value: " << values[i] << endl;
    }
    return 0;
}
void shuffle(int values[], int size) {
    // Seed our random number generator.
    srand((int)time(NULL));
    // Create large number of swaps
    // This example takes the size and times it by 20 for the number of swaps
    for (int i = 0; i < (size * 20); i++) {
        // Generate random values for subscripts, not values!
        int randvalue1 = (rand() % size) + 0;
        int randvalue2 = (rand() % size) + 0;
        int temp = values[randvalue1];
        values[randvalue1] = values[randvalue2];
        values[randvalue2] = temp;
    }
}
