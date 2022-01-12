#include <stdio.h>
void main()
{
    int a,*ptr;
    a=15;
    ptr=&a;
    printf("a=%d &a=%x ptr=%x &ptr=%x *ptr=%d",a,&a,ptr,&ptr,*ptr);
}
