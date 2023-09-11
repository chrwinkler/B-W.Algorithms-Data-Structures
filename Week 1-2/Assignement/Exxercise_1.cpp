#include <iostream>
#include <vector>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void)
{

    // int M = rand() % 10;
    int N = rand() % 100;
    int M = rand() % 100;
    int rNum;
    std::vector<int> MList;
    std::vector<int> NList;
    std::vector<int>::iterator Nitr;
    std::vector<int>::iterator Mitr;
    int counter = 0;
    srand(time(NULL));

    for (int i = 0; i < M; i++)
    {
        int rNum = rand() % 10;
        cout << rNum << " ";
        MList.push_back(rNum);
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        int rNum = rand() % 10;
        cout << rNum << " ";
        NList.push_back(rNum);
    }
    cout << endl;

    for (Nitr = NList.begin(); Nitr != NList.end(); Nitr++)
    {
        for (Mitr = MList.begin(); Mitr != MList.end(); Mitr++)
        {
            if (*Nitr == *Mitr)
            {
                counter++;
            }
        }
    }

    cout << counter << endl;
}