#include<stdio.h>

int main()
{
    int num;

    printf("enter number = \n");
    scanf("%d",&num);

    //#if == bhut sare if mei se sirf ek if extecte hoga thats why called as IF-ELSE IF

    if (num==1)
    {   
        printf("your num is 1 \n");
    }

    else if (num==2)
    {
         printf("your num is 2 \n");
    }

    else if (num==3)
    {
         printf("your num is 3 \n");
    }

    //#else

    else
    {
        printf("your num is not 1 2 and 3 \n");
    }
    

    return 0;
}

