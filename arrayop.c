#include <stdio.h>
int i,n;
int a[50];
void main()
{
    void display(int a[]);
    void search(int a[]);
    void insert(int a[]);
    void deletion(int a[]);
    void sort(int a[]);
    int choice;
    printf("Enter the total num of elements in array");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    {


        printf("\n Select Option \n");
        printf("\n 1.Display   2.Search   3.Insert  4.Delete   5.Sort  6.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\n DISPLAY \n");
                   display(a);
                   break;
            case 2:printf("\n SEARCH \n");
                    search(a);
                    break;
            case 3:printf("\n INSERT \n");
                    insert(a);
                    break;
            case 4:printf("\n DELETION");
                    deletion(a);
                    break;
            case 5:printf("\n SORT");
                    sort(a);
                    break;
            case 6: exit(1);
                    break;
            default:printf("Wrong choice");

        }
        }while(choice<=6);

}
void display(int a[])
{
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }


}
void search(int a[])
{
    int j;
    printf("\nEnter the value to be searched");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            printf("\n %d is the %dth element of array",j,i+1);

        }


    }
}
void insert(int a[])
{
    int j,k;
    printf("\n The original array is:");
    display(a);
    printf("\n Enter the value to be inserted");
    scanf("%d",&j);
    printf("\n Enter the position to where element to be inserted");
    scanf("%d",&k);
    for(i=n;i>k-2;i--)
    {
        a[i+1]=a[i];

    }
    a[k-1]=j;
    printf("\n The resultant array is:\n");
    for(i=0;i<n+1;i++)
    {
        printf("%d,",a[i]);
    }
}
void deletion(int a[])
{
    int j;
    printf("\n original array:");
    display(a);
    printf("\nEnter the position of value to be deleted\n");
    scanf("%d",&j);
    for(i=j-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("Resultant array:");
    for(i=0;i<n-1;i++)
    {
        printf("%d,",a[i]);
    }

}
void sort(int a[])
{
    int j,b;
    printf("\n The original array is:");
    display(a);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    printf("\n The Sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
}
