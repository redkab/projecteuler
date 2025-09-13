#include<stdio.h>

int is_palindrome(int x)
{
    int rem; 
    int sum=0;
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

      for( i=100; i<1000; i++)
      {
      for(j=100; j<1000; j++)
      {
      prod = i*j;
    //printf("%d times %d is %d\n", i, j, prod);
    if(prod > pal_max && is_palindrome(prod))
    {
    pal_max = prod;
    printf("Pal Max is %d\n", pal_max);
    }
    }
    }
    printf("%d\n", pal_max);
   /* int a = 21012;
    int b;
    int i;
    for(i=1; i<1000; i++)
    {
        if(is_palindrome(i))
        {
            printf("%d\n", i);
        }
    }*/
}


