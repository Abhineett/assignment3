#include<stdio.h>
void main()
{
    char a;
    printf("Enter alphabet=");
    scanf("%c",&a);
    if(a>='A'&&a<='Z')
        printf("upper case");
    else
        printf("lower case");
}
