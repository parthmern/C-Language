#include <stdio.h>
int main()
{
    int principal,rate,years;
    
    prinf("enter principal here= \n  ");
    scanf(" %d",&principal);

    printf("enter rate here= \n  ");
    scanf(" %d",&rate);

    printf("enter years here= \n ");
    scanf("%d",&years);

    int si =(principal*rate*years)/100;

    printf("SI = %d",si);
    return 0;
    
}