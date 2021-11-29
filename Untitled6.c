#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Before Swaping\n\n");
    printf("1st number = ");
    scanf("%d",& num1);
    printf("2nd number = ");
    scanf("%d",& num2);
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    printf("__________________\n\nAfter Swaping\n\n");
    printf("1st number = %d\n",num1);
    printf("2nd number = %d",num2);
    return 0;
}
