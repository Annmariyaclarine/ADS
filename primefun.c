#include <stdio.h>
void main()
{
    int n;
    void prime(int n);
    printf("enter the range");
    scanf("%d",&n);
    prime(n);

}
void prime(int n)
{
    int i,j;
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
