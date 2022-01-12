#include <stdio.h>
void main()
{
    char c;
    int a,b,d;
    printf("a)Addition \n b)Substraction \n c)Multiplication \n d)Division\n ");
    printf("Enter choice");
    scanf("%c",&c);
    printf("enter the two numbers on which you want to do the operations");
    scanf("%d%d",&a,&b);
    switch(c)
    {
        case 'a':c=a+b;

    }
}
