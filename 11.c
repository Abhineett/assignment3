#include<stdio.h>
void main()
{
    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter the obtained marks of five subject=");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    if(sub1>=33&&sub2>=33&&sub3>=33&&sub4>=33&&sub5>=33)
        printf("candidate passed");
    else
        printf("candidate failed");



}
