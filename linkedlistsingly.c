#include <stdio.h>
typedef struct node
{
    int data;
    struct node *link;
}node1;
node1 *start=NULL;
void main()
{
    void display();
    void insert_bg();
    void insert_btw();
    void in_e();
    void del_b();
    void del_e();
    void del_bw();
    int choice;
        while(1)
        {
            printf("\n------------------LINKED LIST---------------\n");
            printf("Select choice \n 1.Display \n 2.Insert at begining \n 3.Insert between two nodes \n 4.Insert at the end  \n 5.Delete at begining \n 6.Delete node between two nodes  \n 7.Delete at the end \n 8.Exit\n");
            printf("\n Enter the choice: ");
            scanf("%d",&choice);
            switch(choice)
            {

                case 1:printf("\nDisplay \n");
                     display();
                       break;
                case 2:printf("\nInsert at begining \n");
                        insert_bg();
                        break;
                case 3:printf("\nInsert between two nodes\n");
                        insert_btw();
                        break;
                case 4:printf("\nInsert at the end\n");
                        in_e();
                        break;
                case 5:printf("\nDelete at begining\n");
                        del_b();
                        break;
                case 6:printf("\nDelete node between two nodes\n");
                        del_bw();
                        break;
                case 7:printf("\nDelete at the end\n");
                        del_e();
                        break;
                case 8:printf("\nEXIT\n");
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
void display()
{
    node1 *temp;
    if(start==NULL)
    {
        printf("\nLinked list is empty\n");
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
void insert_bg()
{
    int val;
    node1 *nptr=create();
    printf("Enter the element:");
    scanf("%d",&val);
    nptr->data=val;
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
}
void insert_btw()
{
    node1 *temp,*nptr=create();
    int val,pos,i;
    printf("Enter the value to be inserted: ");
    scanf("%d",&val);
    printf("Enter the position of the node to be inserted: ");
    scanf("%d",&pos);
    nptr->data=val;
    nptr->link=NULL;

    if(pos==1)
    {
        nptr->link=start;
        start=nptr;
    }

    else
    {
        i=1;
        temp=start;
        while(i<pos-1)
        {
            temp=temp->link;
            i=i+1;
        }
        nptr->link=temp->link;
        temp->link=nptr;


    }
    }
    void in_e()
    {
        node1 *temp,*nptr=create();
        int val;
        printf("Enter element: ");
        scanf("%d",&val);
        nptr->data=val;
        nptr->link=NULL;
        temp=start;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=nptr;
    }
    void del_b()
    {
        node1 *temp;
        if(start==NULL)
        {
            printf("\nList is empty");
        }
        else
        {
            temp=start;
            start=start->link;
            free(temp);
        }
    }
    void del_e()
    {
        node1 *temp,*prev;
        temp=start;
        while(temp->link!=NULL)
        {
            prev=temp;
            temp=temp->link;

        }
        prev->link=NULL;
        free(temp);

    }
    void del_bw()
    {
        node1 *temp,*prev;
        int i,pos;
        printf("Enter position of value to be deleted:");
        scanf("%d",&pos);
        temp=start;
        if(pos==1)
            start=start->link;
        for(i=1;i<pos;i++)
        {
            prev=temp;
            temp=temp->link;

        }
        prev->link=temp->link;
        free(temp);
    }




