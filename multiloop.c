#include <stdio.h>
void main()
{
    int i,j,n,p;
    printf("enter the range");
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
        for(j=1;j<11;j++)
        {
            p=j*i;
            printf("\n %d*%d=%d",j,i,p);
        }
}
