#include<stdio.h>

int count(int x)
{
    int count=0;
    while(x)
    {
        count++;
        x/=10;
    }
    return count;
}

int check(int n, int d)
{
    while(n)
    {
        if(n%10 == d)return 1;
        n/=10;
    }
    return 0;
}

int is_pandigital(int x)
{
    for(int i=1; i<=count(x);i++)
    {
        if(!check(x, i))return 0;
    }
    return 1;
}

int is_prime(int x)
{
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)return 0;
    }
    return 1;
}

int main()
{
    int max=0;
    for(int i=3;count(i)<10; i+=2)
    {
        if(is_pandigital(i) && is_prime(i))
        {
            max = i;
            printf("i is %d and max is %d\n", i, max);
        }
    }

}
