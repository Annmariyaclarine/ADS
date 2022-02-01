#include <stdio.h>
struct link
{
    int info;
    struct link *next,*prev;
};
typedef struct link node;
node *start=NULL;
void inb();
void ine();
void inbw();
void delb();
void dele();
void delbw();
void dispf();
void dispb();
void search();
void main()
{
    int choice;
        while(1)
        {
            printf("\n------------------DOUBLY LINKED LIST---------------\n");
            printf("Select choice \n 1.Display forward\t2.Insert at begining\t3.Insert between two nodes\t4.Insert at the end\n5.Delete at begining\t6.Delete node between two nodes \t7.Delete at the end\t8.Display backward \n9.Search\t10.Exit\n");
            printf("\n Enter the choice: ");
            scanf("%d",&choice);
            switch(choice)
            {

                case 1:printf("\nDisplay forward\n");
                        dispf();
                       break;
                case 2:printf("\nInsert at begining \n");
                        inb();
                        break;
                case 3:printf("\nInsert between two nodes\n");
                        inbw();
                        break;
                case 4:printf("\nInsert at the end\n");
                        ine();
                        break;
                case 5:printf("\nDelete at begining\n");
                        delb();
                        break;
                case 6:printf("\nDelete node between two nodes\n");
                        delbw();
                        break;
                case 7:printf("\nDelete at the end\n");
                        dele();
                        break;
                case 8:printf("\nDisplay backward\n");
                        dispb();
                        break;
                case 9:printf("\nSearch for an element\n");
                        search();
                        break;
                case 10:printf("\nEXIT\n");
                        exit(1);
                default:printf("\n Wrong choice\n");
            }
        }

}
node *create()
{
    node *nptr=(node*)malloc(sizeof(node));
    if(nptr==NULL)
    {
        printf("memory overflow");
        return 0;
    }
    else
        return nptr;
}
void inb()
{
    node *nptr=create();
    int e;
    if(nptr==NULL)
        printf("memory overflow");
    else
    {
        printf("\nenter item :");
        scanf("%d",&e);
        nptr->info=e;
        if(start==NULL)
        {
            start=nptr;
            nptr->next=NULL;
            nptr->prev=NULL;
        }
        else
        {
            nptr->next=start;
            nptr->prev=NULL;
            start->prev=nptr;
            start=nptr;
        }
    }
    printf("\nelement inserted\n");
}
void ine()
{
    node *nptr=create();
    node *temp=start;
    node *ptr;
    int e;
    if(nptr==NULL)
        printf("memory overflow");
    else
        {
            printf("\nenter item :");
            scanf("%d",&e);
            nptr->info=e;
            if(temp==NULL)
            {
                start=nptr;
                nptr->next=NULL;
                nptr->prev=NULL;
            }
            else
            {
                while(temp!=NULL)
                {
                    ptr=temp;
                    temp=temp->next;
                }
                ptr->next=nptr;
                nptr->next=NULL;
                nptr->prev=ptr;
            }
        }
        printf("\nelement inserted\n");
}
void inbw()
{
    int c=1,pos,e;
    node *nptr=create();
    node *temp=start;
    node *ptr;
    printf("\nenter item:");
    scanf("%d",&e);
    nptr->info=e;
    ptr=temp;
    nptr->next=NULL;
    printf("\nenter the position :");
    scanf("%d",&pos);
    if(temp==NULL)
    {
        start=nptr;
        nptr->next=NULL;
        nptr->prev=NULL;
    }
    else
    {
        if(pos==-1)
        {
            nptr->next=start;
            start->prev=nptr;
            start=nptr;

        }
        else
        {
            while(temp!=NULL)
            {
                if(c==pos)
                {
                    nptr->next=ptr->next;
                    ptr->next->prev=nptr;
                    nptr->prev=ptr;
                    ptr->next=nptr;
                    break;
                }
                ptr=temp;
                temp=temp->next;
                c++;
            }
        }
    }
    printf("\nelement inserted\n");
}
void delb()
{
    node *nptr;
    if(start==NULL)
    {
        printf("\nEmpty list\n");
    }
    else
    {
        nptr=start;
        printf("\nelement deleted is: %d",nptr->info);
        start=nptr->next;
        nptr->next->prev=NULL;
        free(nptr);
    }
}
void dele()
{
    node *nptr,*temp,*ptr;
    int c=1;
    if(start==NULL)
    {
        printf("\nEmpty list\n");

    }
    else
    {
        nptr=start;
        while(nptr->next!=NULL)
        {
            temp=nptr;
            nptr=nptr->next;
            c++;

        }
        printf("\nelement ddeleted is :%d",nptr->info);
        temp->next=NULL;
        free(nptr);
        if(c==1)
            start=NULL;
    }
}
void delbw()
{
    int c=1,pos,f=0;
    node *nptr,*temp;
    if(start==NULL)
        printf("\nList is empty\n");
    else
    {
        printf("\nenter position:");
        scanf("%d",&pos);
        temp=start;
        nptr=start;
        if(pos==1)
        {
            start=temp->next;
            printf("\nelement deleted is %d",temp->info);
            f=1;
            temp->next->prev=NULL;
            free(temp);
        }
        else
        {
            while(temp!=NULL)
            {
                if(c==pos)
                {
                    nptr->next=temp->next;
                    printf("\nelement deleted is: %d",temp->info);
                    temp->next->prev=nptr;
                    free(temp);
                    f=1;
                }
                nptr=temp;
                temp=temp->next;
                c++;
            }
        }
        if(f==0)
        {
            printf("\ninvalid position\n");
        }
    }

}
void dispf()
{
    node *temp;
    temp=start;
    if(temp==NULL)
        printf("\nempty list \n");
    else
    {
        printf("\nlinked list is: \n");
        while(temp!=NULL)
        {
            printf("\t%d ",temp->info);
            temp=temp->next;
        }
    }
}
void dispb()
{
    node *temp;
    temp=start;
    if(temp==NULL)
        printf("\nempty list\n");
    else
    {
        printf("\nlinked list is:\n");
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        while(temp!=NULL)
        {
            printf("\t%d",temp->info);
            temp=temp->prev;
        }
    }
}
void search()
{
    int e,f=0,c=1;
    node *temp;
    temp=start;
    if(temp==NULL)
        printf("\nempty list");
    else
    {
        printf("\nenter element to be searched:");
        scanf("%d",&e);
        while(temp!=NULL)
        {
            if(temp->info==e)
            {
                printf("\nelement found at position %d",c);
                f=1;
            }
            temp=temp->next;
            c++;
        }
        if(f==0)
            printf("\nelement not found");
    }
}
