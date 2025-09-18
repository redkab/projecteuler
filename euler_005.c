#include<stdio.h>

int main()
{
    
    int x=1;
    while(1)
    {
        if(x%7 == 0 && x%9 == 0 && x%11 == 0 && x%13 == 0 && x%15 == 0 && x%17 == 0 && x%19 == 0 && x%16 ==0)
        {
            printf("%d\n", x);
            break;
        }
    }
}
