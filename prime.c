#include <stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the range");
    scanf("%d",&n);
    if(n>2)
    {
        printf("2,");
    }
    for(i=0;i<n;i++)
    {

        for(j=2;j<i;j++)
        {
            if(i%j!=0)
                printf("%d,",i);
                break;
        }
    }

}
