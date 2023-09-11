#include <stdio.h>
#include <time.h>
#include <math.h>

void myMethod(int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n * n; ++j)
        {
            ++sum;
        }
    }
}

int main(void)
{
    int N, msec = 0;
    printf("Input N:");
    scanf_s("%d", &N);
    clock_t before = clock();
    myMethod(N);
    clock_t duration = clock() - before;
    msec = duration * 1000 / CLOCKS_PER_SEC;
    printf("duration in msec: %d", msec);
    return 0;
}