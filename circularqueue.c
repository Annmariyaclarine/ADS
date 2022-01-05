#include <stdio.h>
int cq[100],n;
int rear=-1;
int front=-1;
void main()
{
    void display();
    void enqueue();
    void dequeue();
    int choice;
    printf("Enter the maximum limit of queue:");
    scanf("%d",&n);
     while(1)
    {
        printf("\n Select option \n");
        printf("1.Display  2.Enqueue  3.Dequeue  4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
            {

                case 1:printf("\nDISPLAY\n");
                       display();
                       break;
                case 2:printf("\n ENQUEUE\n");
                        enqueue();
                        break;
                case 3:printf("\n DEQUEUE\n");
                         dequeue();
                        break;
                case 4:printf("\n EXIT\n");
                        exit(1);
                default:printf("\n Wrong choice");
            }
    }

}
void display()
{
    int i;
    if(front==-1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        for(i=front;i!=rear;i=(i+1)%n)
        {
            printf("%d,",cq[i]);
        }
        printf("%d",cq[i]);
    }
}
void enqueue()
{
    int ele;
    if(front==rear+1 ||(front==0 && rear==n-1))
    {
        printf("\nQueue is full\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear=(rear+1)%n;
        printf("\nEnter element:");
        scanf("%d",&ele);
        cq[rear]=ele;
    }
}
void dequeue()
{
    int data;
    if(front==-1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        data=cq[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%n;
        }
        printf("\nDeleted element:%d",data);
    }
}
