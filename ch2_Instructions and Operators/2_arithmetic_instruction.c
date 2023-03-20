#include <stdio.h>

int main()
{
    int a,b;

    printf("enter the value of a \n");
    scanf("%d",&a);

    printf("enter the value of b \n");
    scanf("%d",&b);

    printf("sum = %d \n",a+b);
    printf("minus = %d \n",a-b);
    printf("multiplication = %d \n",a*b);
    printf("substarction = %d \n",a/b);
    printf("modulas = %d \n",a%b);

    int power= pow(a,b);
    printf("power = %d",power);


    return 0;
}