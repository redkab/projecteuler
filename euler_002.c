#include<stdio.h>

int is_even(int x)
{
    if(x%2 ==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_even_small(int x)
{
    return x%2 ==0;
}

int main()
{
    int a=0;
    int b=1;
    int c=1;
    int sum=0;
    while(1)
    {
        c=a+b;
        if(c>4000000)
        {
            break;
        }
        if( is_even(c))
        {
            sum +=c;
        }
        printf("%d\n", c);
        a=b;
        b=c;
    }
    printf("Sum is %d\n",sum);
}


