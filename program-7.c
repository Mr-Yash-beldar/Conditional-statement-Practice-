//determinig person height program
#include <stdio.h>
void main()
{
    float PerHeight;
    printf(" Input the height of the person (in centimetres)	:");
    scanf("%f", &PerHeight);
    if (PerHeight < 150.0)
    {
        printf(" The person is Dwarf. \n");
    }
    else if ((PerHeight >= 150.0) && (PerHeight < 165.0))
    {
        printf(" The person is average heighted. \n");
    }
    else if ((PerHeight >= 165.0) && (PerHeight <= 195.0))
    {
        printf(" The person is taller. \n");
    }
    else
    {
        printf(" Abnormal height.\n");
    }
}