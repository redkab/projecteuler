#include<stdio.h>
#define SIZE 11
void arr_print(int arr[], int size);
void arr_adder(int x[], int y[], int s[],  int size, int sum_size)
{
    int i,j, carry=0,sum, val;
    for(i=size-1, j=sum_size-1; i>=0; i--, j--)
    {
        sum = x[i] + y[i];
        val = (carry+sum)%10;
        carry = (carry + sum)/10;
        s[j] = val;
    }
    printf(__func__);
    arr_print(s, SIZE); 
}

void arr_print(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
void multiplier(int arr[], int ans[], int k, int arr_size, int ans_size)
{
    int i,j,val, digit, carry=0;
    for(i = arr_size-1, j = ans_size - 1; i>=0; i--, j--)
    {
        digit = arr[i];
        val = (carry + digit*k)%10;
        carry = (carry + digit*k)/10;
        ans[j] = val;
    }
    ans[j-1] = carry;
    printf(__func__);
    arr_print(ans, SIZE);
}
void arr_shift(int arr[], int size)
{
    int i;
    for(i=1; i<size; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[size-1] = 0;
    printf(__func__);
    arr_print(arr, SIZE);

}

int main()
{
    //int arr[] = {0,0,0,0,0,1};
    int a1[SIZE] = {0};
    int a2[SIZE] = {0};
    int prod[SIZE] = {0};
    prod[SIZE-1] = 1;
    int i,j,k;
    for(k=1; k<=10; k++)
    {
    i=k%10;
    j=k/10;
    multiplier(prod, a1, i, SIZE, SIZE);
    multiplier(prod, a2, j, SIZE, SIZE);
    arr_shift(a2, SIZE);
    //arr_print(a1, 6);
    //arr_print(a2, 6);
    arr_adder(a1, a2, prod, SIZE, SIZE);
    arr_print(prod, SIZE);
    }
    printf("final factorial =");
    arr_print(prod, SIZE);
}

