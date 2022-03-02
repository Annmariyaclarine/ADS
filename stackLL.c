#include<stdio.h>
int top;
typedef struct node
{
    int data;
    struct node *link;
}node1;
node1 *start=NULL;

void display();
void insert_bg();
void del_b();
void peek();
void main()
{
    int choice;
    while(1)
        {
            printf("\n--------------------------STACK ----------------------------\n");
            printf("Select choice \n 1.Display \t 2.Push \t 3.Pop \t 4.Peek \t 5.Exit\n");
            printf("\n Enter the choice: ");
            scanf("%d",&choice);
            switch(choice)
            {

                case 1:printf("\nDisplay \n");
                       display();
                       break;
                case 2:printf("\nPush\n");
                        insert_bg();
                        break;
                case 3:printf("\nPop\n");
                        del_b();
                        break;
                case 4:printf("\nPeek\n");
                        peek();
                        break;
                case 5:printf("\nEXIT\n");
                        exit(1);
                default:printf("\n Wrong choice\n");
            }
        }
}
node1 *create()
{
    node1 *nptr=(node1*)malloc(sizeof(node1));
    if(nptr==NULL)
    {
        printf("memory overflow");
        return 0;
    }
    else
    {
        return nptr;
    }
}
void insert_bg()
{
    int val;
    node1 *nptr=create();
    printf("Enter the element:");
    scanf("%d",&val);
    nptr->data=val;
    top=nptr->data;
    if(start==NULL)
    {
        start=nptr;
        nptr->link=NULL;
    }
    else
    {
        nptr->link=start;
        start=nptr;
    }
    printf("The element is pushed");
}
    void del_b()
    {
        node1 *temp;
        if(start==NULL)
        {
            printf("\nStack is empty");
        }
        else
        {
            temp=start;
            start=start->link;
            free(temp);
            top=start->data;
            printf("The element is popped");

        }
    }
void display()
{
    node1 *temp;
    if(start==NULL)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }

}
void peek()
{
    printf("TOP = %d",top);
}
