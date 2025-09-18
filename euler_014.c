#include<stdio.h>

int collatz_length(long long  x)
{
    int length=0;
    while(x != 1)
    {
        if(x%2 == 0)
        {
            x /= 2;
        }
        else
        {
            x = 3*x + 1;
        }
        length++;
    }
    return length + 1;
}

int main()
{
    int i;
    int max=0;
    int length;
    int ans;
    for(i=1; i<1000000; i++)
    {
        length = collatz_length(i);
        printf("Length of %d is %d\n", i, length);
        if(length > max)
        {
            max = length;
            ans = i;
        }
    }
    printf("Final ans is %d\n", ans);
}

