#include <iostream>
using namespace std;

int main()
{

    // if rahul  mother allow him to go for playing cricket on odd date of month and rahul have 10 number of cricket ball
    // when the no. of cricket ball is equal to zero then rahul shall not able to go for playing cricket . print all the date of
    // of 1 month when rahul goes for playing cricket. whwn rahul goes for one time his one ball to be less.

    int no_crick_ball = 10;
    int i;
    for (i = 1; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        if (no_crick_ball == 0)
        {
            break;
        }
        no_crick_ball = no_crick_ball - 1;
        cout << i << endl;
    }

    return 0;
}