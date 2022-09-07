//vote eligibility checker program
#include <stdio.h>
void main()
{
    int vote_age;
    printf(" Input the age of the candidate : ");
    scanf("%d", &vote_age);
    if (vote_age < 18)
    {
        printf(" Sorry , You are not eligible to caste your vote.\n");
    printf(" You would be able to caste your vote after %d year ",18- vote_age);
    }
    else
    {
        printf(" Congratulation! You are eligible for casting your vote.\n");
    }
}