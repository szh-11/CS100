#include <stdio.h>

int main()
{
    // Calculate the average power of all energy cores.

    int count;
    double total = 0;

    printf("How many energy cores are there?\n");
    scanf("%d", &count);
    printf("Enter the power level of each core:\n");

    // We programmers count from zero!
    for (int i = 0; i < count; i++)
    {
        int power;
        scanf("%d", &power);
        total += power;
    }

    double average = total / count;
    double diff = average - 50.00;
    if (diff < 0.000000000000001 && -diff < 0.0000000000001)
    {
        printf("Sufficient!\n");
    }
    else if (average > 50)
    {
        printf("Overcharged!\n");
    }
    else
    {
        printf("Low Power!\n");
    }

    printf("Average power is %.2lf.\n", average);

    return 0;
}

// else总是和最近的if，所以if else if else if 。。。。if
// double/float等于的时候特殊判断