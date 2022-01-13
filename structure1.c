#include <stdio.h>
void main()
{
    struct student
    {
        int roll_no;
        char name[20];
        int mark[3];
        int tot;
    }s[50];
    int n,j,i;
    printf("\n Enter the number of students");
    scanf("%d",&n);
    printf("\n Enter the details ");
    for(i=0;i<n;i++)
    {
        printf("\n Enter the roll no");
        scanf("%d",&s[i].roll_no);
        printf("\n Enter the name");
        scanf("%s",&s[i].name);
        printf("\n Enter the marks of subjects");
        for(j=0;j<3;j++)
           {
            scanf("%d",&s[i].mark[j]);
            s[i].tot=s[i].tot+s[i].mark[j];
           }
        printf("\n Roll no:%d , Total=%d ",s[i].roll_no,s[i].tot);
    }

}
