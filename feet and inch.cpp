#include<stdio.h>
struct Distance
{
    int feet;
    float inch;
} d1, d2, d3;

int main()
{
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);


    d3.feet = d1.feet+d2.feet;
    d3.inch = d1.inch+d2.inch;

    // If inch is greater than 12, changing it to feet.

    if (d3.inch>12.0)
    {
        d3.inch =d3.inch-12.0;
        ++d3.feet;
    }

    printf("\n%d feet+%.1f inch\n",d3.feet, d3.inch);
    return 0;
}
