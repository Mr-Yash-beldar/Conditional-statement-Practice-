//leap year checking program
#include <stdio.h>
void main()
{
    int chk_year;
    printf(" Input a year : ");
    scanf("%d", &chk_year);
    if ((chk_year % 400) == 0)
    {
        printf("%d is a leap year.\n", chk_year);
    }
    else if ((chk_year % 100) == 0)
    {
        printf("%d is a not leap year.\n", chk_year);
    }
    else if ((chk_year % 4) == 0)
    {
        printf("%d is a leap year.\n", chk_year);
    }
    else
    {
        printf("%d is not a leap year. \n", chk_year);
    }
}
