#include <stdio.h>

int main()
{
    int testCase, N;
    long long data[5005];

    scanf("%d", &testCase);
    for (int t = 1; t <= testCase; t++)
    {
        scanf("%d", &N);
        long long sum = 0;

        for (int i = 0; i < N; i++)
        {
            scanf("%lld", &data[i]);
            sum += data[i];
        }

        double mean = (double)sum / N;

        // Bubble sort
        for (int a = 0; a < N - 1; a++)
        {
            for (int b = 0; b < N - 1 - a; b++)
            {
                if (data[b] > data[b + 1])
                {
                    long long temp = data[b];
                    data[b] = data[b + 1];
                    data[b + 1] = temp;
                }
            }
        }

        double median;
        if (N % 2 != 0)
            median = data[N / 2];
        else
            median = (data[N / 2 - 1] + data[N / 2]) / 2.0;

        printf("Case #%d:\n", t);
        printf("Mean : %.2f\n", mean);
        printf("Median : %.2f\n", median);
    }
    return 0;
}