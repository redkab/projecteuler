#include<stdio.h>
void array_print(int arr[], int size)
{
    int i, sum=0;
    for(i=0; i<size; i++)
    {
        printf("%d", arr[i]);
        sum += arr[i];
    }
    printf("\n");
    printf("Sum is %d\n", sum);
}


int main()
{
    int arr[304] = {0};
    arr[303] = 1;
    int size = sizeof(arr)/sizeof(arr[0]);
     
    int carry = 0;
    int i,j,digit;
    for(j=0; j<1000; j++)
    {
        carry=0;
        for(i=0; i<size;i++)
        {
            digit = arr[size-1-i];
            arr[size-1-i] = (carry + 2*digit)%10;
            carry = (carry + 2*digit)/10;
           // printf("Sum is %d and carry is %d\n", arr[size-i-1], carry);
        }

            array_print(arr, size);
    }
}
