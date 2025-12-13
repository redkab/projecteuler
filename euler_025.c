#include<stdio.h>

void adder(int a[], int b[], int c[], int size)
{
    int i, sum, dig, carry=0;
    for(i=size-1; i>=0; i--)
    {
        sum = a[i] + b[i] + carry;
        dig = sum%10;
        carry = sum/10;
        c[i] = dig;
    }
}
void print(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
void copy(int a[],int b[], int size) //a=b
{
    int i;
    for(i=0; i<size; i++)
    {
        a[i]=0;
    }
    for(i=0; i<size; i++)
    {
        a[i] = b[i];
    }

}


int main()
{
    int a[1002] = {0};
    int b[1002]={0};
    int c[1002]={0};
    a[1001] = 1;
    b[1001] = 1;
    int size = 1002;
    for(int i=3; ; i++)
    {
        adder(a,b,c,size);
        copy(a,b,size);
        copy(b,c,size);
        //print(c, size);
        if(c[2] != 0)
        {
            printf("%d\n", i);
            break;
        }

    }

}


