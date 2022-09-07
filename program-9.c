#include <stdio.h>

void main()
{
    int co1, co2;
    printf(" Input the values for X and Y coordinate : ");
    scanf("%d %d", &co1, &co2);
    if (co1 > 0 && co2 > 0)
    {
        printf(" The coordinate point (%d,%d) lies in the First quadrant.\n", co1, co2);
    }
    else if (co1 < 0 && co2 > 0)
    {
        printf(" The coordinate point (%d,%d) lies in the Second quadrant.\n", co1, co2);
    }
    else if (co1 < 0 && co2 < 0)
    {
        printf(" The coordinate point (%d, %d) lies in the Third quadrant.\n", co1, co2);
    }
    else if (co1 > 0 && co2 < 0)
    {
        printf(" The coordinate point (%d,%d) lies in the Fourth quadrant.\n", co1, co2);
    }
    else if (co1 == 0 && co2 == 0)
    {
        printf(" The coordinate point (%d,%d) lies at the origin.", co1, co2);
    }
}