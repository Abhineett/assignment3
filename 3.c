#include<stdio.h>
void main()
{

    int n;
    printf("Enter the number=");
    scanf("%d",&n);
    if(n&1)
        printf("odd");
    else
        printf("even");
}
