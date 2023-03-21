#include<stdio.h>

int main()
{
    int a;
    int vip = 0;
    // vip = 1;

    printf("enter age=  \n");

    scanf("%d",&a);

    if ((a<=70 && a>=18) || !(vip==1))
    {
        printf("you are below 70 and above 18 then you can drive \n");
    }

    else
    {
        printf("you cannot drive \n");
    }


    return 0;
}