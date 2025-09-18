#include<stdio.h>

int is_prime(int x)
{
    int i;
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
    int n, i;
    int count = 0;
    for(i=0; ; i++)
    {
        if(is_prime(i))
        {
            count++;
        }
        if(count == 10001)
        {
            printf("%d\n", i);
            break;
        }
    }
}
