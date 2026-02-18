#include<stdio.h>
#include<stdlib.h>

int count(int x)
{
    int c=0;
    while(x)
    {
        x/=10;
        c++;
    }
    return c;
}

void print(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
int rotate(int x, int c)
{
    int *arr = (int *)calloc(c,sizeof(int));
    int i=c-1;
    while(x)
    {
        arr[i--] = x%10;
        x/=10;
    }
    int buff = arr[0];
    for(int i=0; i<c-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[c-1] = buff;
    int num=0, b=1;
    for(int i=c-1; i>=0; i--)
    {
        num += arr[i]*b;
        b*=10;
    }
    free(arr);
    return num;
}

int isPrime(int x)
{
    for(int i=2; i*i<=x; i++)
    {
        if(!(x%i))return 0;
    }
    return 1;
}

int isCircular(int x)
{
    int c = count(x);
    int y=x;
    for(int i=0; i<c; i++)
    {
        if(!isPrime(y))return 0;
        y = rotate(y, c);
    }
    return 1;
}
int main()
{
    int c=0;
    for(int i=2; i<1000000; i++)
    {
        if(isCircular(i))c++;
        printf("Checking %d count is %d\n", i, c);
    }
    printf("FInal ans is %d\n", c);
}
