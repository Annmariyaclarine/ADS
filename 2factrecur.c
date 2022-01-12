#include <stdio.h>
void main()
{
    int fact(int n);
    int n,factorial;
    printf("Enter the number");
    scanf("%d",&n);
    factorial=fact(n);
    printf("The factorial is %d",factorial);
}
int fact(int n)
{
    int f;
    if(n==1)
        return 1;
    else
        f=n*fact(n-1);
        return(f);

}
