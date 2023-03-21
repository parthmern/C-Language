#include<stdio.h>
int main()
{
    int phy,chem,mat;
    float total;

    printf("enter physics marks = \n ");
    scanf("%d",&phy);

    printf("enter chemistry marks = \n ");
    scanf("%d",&chem);

    printf("enter maths marks = \n ");
    scanf("%d",&mat);

    total = (phy + chem + mat)/3;

    if((total<40) || (phy<33) || (chem<33) || (mat<33) )
    {
        printf("your total percentage is %f and you are FAILED",total);
    }

    else
    {
        printf("your total percentage is %f and you are PASSED",total);
    }

    return 0;
}