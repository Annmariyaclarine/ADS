#include <stdio.h>
void main()
{
    char j;
    printf("Enter the alphabet");
    scanf("%c",&j);
    if(j=='a'||j=='e'||j=='i'||j=='o'||j=='u')
    {
        printf("vowel");

    }
    else
    {
        printf("consonant");
    }
}
