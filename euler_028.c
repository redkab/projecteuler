#include<stdio.h>

int main()
{
    int sum=0, s;
    for(int k=1; k<=500; k++)
    {
        s = (2*k +1)*(2*k +1);
        sum += 4*s - 12*k;
    }
    printf("Sum is %d\n", sum+1);
}
