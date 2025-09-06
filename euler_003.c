#include<stdio.h>

int is_prime(int x)
{
    int i;
    //printf("Entered is_prime with x= %d\n", x);
    if(x == 2)
    {
        return 1;
    }
    if(x%2 == 0)
    {
        return 0;
    } 
    for(i=3; i*i<=x; i+=2)
    {
        if(x%i ==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long  int i;
    /* for(i=2; i<30; i++)
       {
       if(is_prime(i))
       {
       printf("%d\n", i);
       }
       }*/
    long long int n=600851475143;
    int pf;
    int iter=0;
    for(i=2; i<= n; i++)
    {
        if(n%i == 0 && is_prime(i))
        {
            pf = i;
            printf("%d\n", pf);
            n=n/pf;
        }
        iter++;
    }
    printf("Largest prime factor of %lld is %d\n", n, pf);
printf("%d iterations\n", iter);
}

