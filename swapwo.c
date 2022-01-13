#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping first number=%d",a);
    printf("After swapping second number=%d",b);
}
