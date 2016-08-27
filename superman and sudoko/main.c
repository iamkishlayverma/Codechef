#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        int a[10][10],k,j,p,flag=0,b[10]={0};
        for(j = 1;j < 10;j++)
        {
            for(k = 1;k < 10;k++)
            {
                scanf("%d",&a[j][k]);
                b[a[j][k]]++;
            }
        }
        for(p = 1;p < 10;p++)
        {
            if(b[p] != 9)
            {
                printf("Not A Sudoku\n");
                break;
            }
            else
            {
                flag++;
            }
        }
        if(flag == 9)
        {
            printf("Its A Sudoku\n");
        }
    }
    return 0;
}
