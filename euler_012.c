#include<stdio.h>

int divisor_count(long long x)
{
    int count = 0;
    long long i;
    for(i=2; i<=x/2; i++)
    {
        if(x%i == 0)
        {
            count ++;
        }
    }
    return count + 2;
}
int main()
{
    long long i;
    long long term, count;
    for(i=1; ; i++)
    {
        term = (i*i + i)/2;
        count = divisor_count(term);
        //printf("%lld has %lld divisors\n", term, count);
        if(count >= 500)
        {
            printf("%lld\n", i);
        }
    }

}


