#include<stdio.h>

int main()
{
    int a=1;
    int i;
    int sum_3=0;
    int sum_5=0;
    int sum_15=0;
    int sum=0;

    for(i=0; i<=1000/3; i++)
    {
        a = 3*i;
        sum_3 += a;
    }
    a=1;

    for(i=0; i<=1000/5; i++)
    {
        a = 5*i;
        sum_5 += a;
    }
    a=1;
    for(i=0; i<=1000/15; i++)
    {
        a = 15*i;
        sum_15 += a;
    }

    int ans;
    ans = sum_3 + sum_5 - sum_15;
    printf("%d\n", ans);

    i=0;
    sum = 0;

    while(i<1000)
    {
        if( i % 5 == 0 && i % 3 == 0)
        {
            sum += i;
            i++;
            continue;
        }
        if(i % 3 == 0)
        {
            sum +=i;
        }
        if(i % 5 == 0)
        {
            sum += i;
        }
        i++;
    }
    printf("Sum=%d\n", sum);


    i=0;
    sum = 0;
    for(i=0;i<1000;i++)
    {
        if(i%15==0)
        {
            sum+=i;
            continue;
        }
        if(i%5==0 || i%3 == 0)
        {
            sum+=i;
        }
    }

    printf("Sum=%d\n", sum);


}



