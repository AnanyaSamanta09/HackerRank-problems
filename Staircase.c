#include<stdio.h>
int main()
{
    int i,n,j,k;
    scanf("%d",&n);
    int s=n-1;
    for(i=1;i<=n;i++)
    {
        for(k=s;k>=1;k--)
        {
            printf(" ");
        }
        s--;
        for(j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return(0);
}
