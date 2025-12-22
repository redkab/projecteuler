#include<stdio.h>
int  is_abundant(int x)
{
    int i, sum=0;
    for(i=1; i<x; i++)
    {
        if(x%i==0)sum += i;
    }
    //printf("sum is %d\n", sum);

    return sum>x;
}
int main()
{
    int i, j, max;
    long long sum=0;
    for(i=1; i<=28123; i++)
    {
        for(j=1; j<=i/2; j++)
        {
            if(is_abundant(j) && is_abundant(i-j))
            {
                sum += i;
                printf("i is %d j is %d sum is %lld\n", i, j, sum);
                break;
            }
        }
    }
}
