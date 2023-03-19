#include <stdio.h>

int main()
{
    int days, month, remaining_days;

    printf("Enter the value of TOTAL DAYS which will be converted into number of mth and remaining days = ");
    scanf("%d",&days);

    month = days / 30;

    remaining_days = days-(month*30);
    printf("the no of month is = %d and \n the number of remainig day is = %d",month,remaining_days);

    return 0;
}