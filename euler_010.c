#include<stdio.h>

int is_prime(int x)
{
    int i=0;
    if(x == 1)
    {
        return 0;
    }
    for(i=2; i*i <= x; i++)
    {
        if(x%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i;
    long sum=0;
    for(i=0; i<2000000; i++)
    {
        if(is_prime(i))
        {
            sum += i;
        }
    }
    printf("%ld\n", sum);
}
