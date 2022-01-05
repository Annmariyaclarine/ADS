#include <stdio.h>
void main()
{
    int a[25],b[25],c[50],i,j,n,m,k,l;
    printf("Enter the total number of elements in 1st array: ");
    scanf("%d",&n);
    printf("Enter the total number of elements in 2nd array: ");
    scanf("%d",&m);
    printf("Enter the elements of 1st sorted array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the elements of 2nd sorted array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }

    i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;
        }
        else
        {
            c[k]=a[i];
            i++;
        }

        k++;
    }
    if(i>=n)
    {
        while(j<m)
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    else if(j>=m)
    {
        while(i<n)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    printf("\n Resultant: ");
    for(k=0;k<n+m;k++)
    {
        printf("%d,",c[k]);
    }

}

