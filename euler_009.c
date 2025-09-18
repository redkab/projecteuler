#include<stdio.h>

int is_pyth(int a, int b, int c)
{
    return a*a + b*b == c*c;
}
int main()
{
    int a,b,c;
    for(a=1; a<1000; a++)
    {
        for(b=1;b<1000 ; b++)
        {
            if(is_pyth(a, b, 1000 - a - b))
            {
               c = 1000 - a - b; 
                printf("%d\n", a*b*c);
            }
        }
    }
}
