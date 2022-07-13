#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number=");
    scanf("%d",&num);
    if(num%3==0&&num%2==0){
        printf("number is divisible by 3 and 2 both.");
    }
    else
    {
        printf(" number not divisible by 3 and 2 ");
    }
}
