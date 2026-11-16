
#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int x);

int main(void)
{
    int number;
    int result;

    scanf("%d", &number);

    if (number > 9966990)
    {
        printf("NG");
        return 0;
    }

    result = gcd(9966990, number);
    printf("%d", result);

    return 0;
}

int gcd(int m, int x)
{
    int remainder;

    while (x != 0)
    {
        remainder = m % x;
        m = x;
        x = remainder;
    }

    return abs(m);
}
