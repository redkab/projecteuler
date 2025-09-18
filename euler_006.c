#include<stdio.h>

int sum_of_squares(int n)
{
    int sum=0;
    int i;
    for(i=0; i<=n; i++)
    {
        sum += i*i;
    }
    return sum;
}
int square_of_sum(int n)
{
    int sum=0;
    int i;
    for(i=0; i<=n; i++)
    {
        sum += i;
    }
    return sum*sum;
}

int main()
{
    int n=100;
    int ans;
    ans = square_of_sum(n) - sum_of_squares(n);
    printf("%d\n", ans);
}
