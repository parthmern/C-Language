#include<stdio.h>

int main()
{
    int a;

    printf("enter age=  \n");

    scanf("%d",&a);

    if (a>=90)
    {
        printf("you are above 90then you cannot drive \n");
    }

    else
    {
        printf("you can drive \n");
    }


    if(a==50)
    {
        printf("halfcentury \n");
    }



    return 0;
}