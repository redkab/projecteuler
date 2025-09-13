#include<stdio.h>

int is_palindrome(int x)
{
    int rem; 
    int sum;
    int temp;
    temp = x;

    while(x>0)
    {
        rem = x%10;
        sum = sum*10 + rem;
        x /= 10;
    }
    return sum == temp;
}

int main()
{
    int max=0;
    int y, i, j, prod;
    int pal_max = 0;

    for( i=0; i<1000; i++)
    {
        for(j=0; j<1000; j++)
        {
            prod = i*j;
            printf("%d times %d is %d\n", i, j, prod);
            
            if(prod > max)
            {
                max = prod;
                if(is_palindrome(max)==1)
                {
                    pal_max = max;
            printf("Pal Max is %d\n", pal_max);
                }
            }
        }
    }
    printf("%d\n", pal_max);
}


