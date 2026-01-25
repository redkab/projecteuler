#include<stdio.h>
#include<math.h>
int count(int x)
{
    int count=0;
    while(x)
    {
        count++;
        x /= 10;
    }
    return count;
}

int is_prime(int x)
{
    for(int i=2; i*i <= x; i++)
    {
        if(x%i==0)return 0;
    }
    return 1;
}

int rotate(int x)
{
    int c = count(x);
    int a = x/pow(10, c-1);
    int b = x%(int)pow(10, c-1);
    return  b*10 + a;
}

int is_circular(int x)
{
    for(int i=0; i<count(x); i++)
    {
        if(is_prime(x)==0)return 0;
        x = rotate(x);
    }
    return 1;
}

int main()
{
    int count=0;
    for(int i=2; i<=1000000; i++)
    {
        if(is_circular(i))count++;
        printf("i is %d and count is %d\n", i, count);
    }

}
