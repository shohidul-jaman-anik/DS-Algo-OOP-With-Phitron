#include<stdio.h>


int main ()
{

    int row, col;
    scanf("%d%d",&row,&col);
    int a[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }

    }
    if(row==col)
    {
        int ans=1;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)
                {
                    // Special  checking for diagonal
                    if(a[i][j]!=1)
                    {
                        ans=0;
                    }
                    continue;
                }
                if(a[i][j]!=0)
                {
                    ans=0;
                }
            }
        }
        if(ans==1)
        {
            printf("Identity\n");
        }
        else
        {
            printf("Not Identity\n");
        }
    }
    else
    {
        printf("Not Identity\n");
    }


    return 0;
}

