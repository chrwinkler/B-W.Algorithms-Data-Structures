#include <iostream>
#include <vector>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void)
{
    srand(time(NULL));
    int N = rand() % 100; // Generates a random N and M to determine how many numbers
    int M = rand() % 100;
    int rNum;
    std::vector<int> MList;
    std::vector<int> NList;
    std::vector<int>::iterator Nitr;
    std::vector<int>::iterator Mitr;
    int counter = 0;

    cout << "List of M numbers: ";
    for (int i = 0; i < M; i++) // Generates the M random numbers and prints them
    {
        int rNum = rand() % 100;
        cout << rNum << " ";
        MList.push_back(rNum);
    }

    cout << "\nList of N numbers: ";
    for (int i = 0; i < N; i++) // Generates the N random numbers and prints them
    {
        int rNum = rand() % 100;
        cout << rNum << " ";
        NList.push_back(rNum);
    }

    for (Nitr = NList.begin(); Nitr != NList.end(); Nitr++) // Compares our lists of N and M numbers
    {
        for (Mitr = MList.begin(); Mitr != MList.end(); Mitr++)
        {
            if (*Nitr == *Mitr)
            {
                counter++;
            }
        }
    }

    cout << "\nHow many N numbers in M list: " << counter << endl; // Prints how many times N numbers appeared in the M list
}