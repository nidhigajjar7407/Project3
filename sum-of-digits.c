#include<stdio.h>
int main()
{
    int num,first,last,sum;
    printf("Enter your number: ");
    scanf("%d",&num);
    last = num % 10;
    while (num >=10) 
    {
        num = num / 10;
    } 
    first = num;
    sum = first + last;
    printf("Your sum is : %d" ,sum);
    return 0;
}