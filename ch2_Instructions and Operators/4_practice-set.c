//Q-03 ( number is divisible by 97 or not)

#include<stdio.h>

int main()
{
     int num;

     printf("enter the number = ");
     scanf("&d",&num);

     int ans= num%97 ;

     printf("the number is divisible ny= %d",&ans)

    return 0;
}