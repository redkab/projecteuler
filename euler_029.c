#include<stdio.h>
#include<stdlib.h>

int isPrime(int x)
{
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)return 0;
    }
    return 1;
}
int nthp(int n)
{
    if(n==1)return 2;
    int k=1;
    for(int i=3; ; i++)
    {
        if(isPrime(i))k++;
        if(k==n)return i;
    }

}
void print(int *arr)
{
    for(int i=0; arr[i]!=0; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int *pf(int a)
{
    int *arr = (int *)calloc(1000, sizeof(int));
    int k=0, i=1;
    while(!isPrime(a))
    {
        if(a%nthp(i)==0)
        {
            int x = nthp(i);
            while(a%x==0)
            {
                a = a/x;
                arr[k++] = x;
            }
        }
        i++;
    }
    if(a!=1)
    {
        arr[k++] = a;
    }
    return arr;
}

int *mul(int *arr, int n, int f)
{
    int *ans = (int *)malloc(n*f*sizeof(int));
    int k=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<f; j++)
        {
            ans[k++] = arr[i];
        }
    }
    return ans;
}

int len(int *arr)
{
    int i;
    for(i=0; arr[i]!=0; i++);
    return i;
}
int eq(int *a, int *b, int la, int lb)
{
    if(la!=lb)return 0;
    for(int i=0; i<lb; i++)
    {
        if(a[i] != b[i])return 0;
    }
    return 1;
}

int search(int *a, int la, int **u, int k)
{
    for(int i=0; i<k; i++)
    {
        if(eq(a, u[i],la,  len(u[i])))return 1;
    }
    return 0;
}
int main()
{
    int ***b = (int ***)malloc(101*sizeof(int **));
    for(int i=0; i<101; i++)
    {
        b[i] = (int **)malloc(101*sizeof(int *));
    }
    for(int i=2; i<=100; i++)
    {
        for(int j=2; j<=100; j++)
        {
            b[i][j] = mul(pf(i),len(pf(i)),j);
            printf("Filled %d^%d\n", i, j);
        }
    }
    int k=0;
    int **un = (int **)malloc(10000*sizeof(int *));
    for(int i=2; i<=100; i++)
    {
        for(int j=2; j<=100; j++)
        {
            int *a = b[i][j];
            if(!search(a, len(a), un, k))
            {
                printf("succeeded with %d^%d\n", i, j);
                un[k++] = a;
            }
        }
    }
    printf("%d\n", k);


}
