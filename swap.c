#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("first value after swap=%d",a);
    printf("second value after swap=%d",b);
}
