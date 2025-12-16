#include<stdio.h>

void print(int grid[][100], int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<40; j++)
        {
            if(grid[i][j] != 0)
            {
                printf("%d\t", grid[i][j]);
            }
        }
        printf("\n");
    }
}
int main()
{
 int grid[100][100] = {0};
    grid[0][0] = 1;
    int i,j;
    for(i=0; i<100; i++)
    {
        grid[i][0] = 1;
    }
    for(i=1; i<100; i++)
    {
        for(j=1; j<40; j++)
        {
            grid[i][j] = grid[i-1][j-1] + grid[i-1][j];
        }
    }
    int n;
    scanf("%d", &n);
   print(grid,n); 
   //printf("%lld\n", grid[40][20]);
}
