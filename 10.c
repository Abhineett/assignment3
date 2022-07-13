#include<stdio.h>
void main()
{
    float cp;
    float sp;
    printf("Enter the cp and sp=");
    scanf("%f%f",&cp,&sp);
    if(cp>sp)
    {
        float loss=cp-sp;
        float losspercentage=loss/cp*100;
        printf("loss is =%f",losspercentage);
    }
    else
    {
        float profit=sp-cp;
        float profitpercentage=profit/cp*100;
        printf("profit is =%f",profitpercentage);
    }
}
