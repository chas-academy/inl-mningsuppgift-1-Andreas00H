#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    int rolls[100];
    int counts[6] = {0};
    int sum = 0;

    for (int i = 0; i < 100; i++)
    {
        rolls[i] = rand() % 6 + 1;
        counts[rolls[i] - 1]++;
        sum += rolls[i];
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", counts[i]);
    }

    printf("%d\n", sum);

    float average = (float)sum / 100;
    printf("%.1f\n", average);

    return 0;
}
