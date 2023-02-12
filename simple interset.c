#include <stdio.h>

int main()
{
    float principle, year, rate, SI;

    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter year: ");
    scanf("%f", &year);

    printf("Enter rate: ");
    scanf("%f", &rate);

    SI = (principle * year * rate) / 100;

    printf("Simple Interest = %f", SI);

    return 0;
}