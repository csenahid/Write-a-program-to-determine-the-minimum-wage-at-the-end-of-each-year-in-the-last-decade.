#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float wage=25000;
    //for-loop for 10 years
    for(i=1;i<=10;i++)
    {
        wage = wage - wage*0.03;
        printf("%d year: %d\n",i, (int)wage);
    }
}
