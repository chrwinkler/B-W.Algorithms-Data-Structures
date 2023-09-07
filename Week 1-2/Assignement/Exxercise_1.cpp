#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(void)
{

    // int M = rand() % 10;
    int N = rand() % 10;
    int rNum;
    std::vector<int> List;
    std::vector<int> itr;

    for (int i = 0; i < N; i++)
    {
        int M = rand() % 10;
        List.push_back(M);
    }

    for (itr = List.begin(); itr != List.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}