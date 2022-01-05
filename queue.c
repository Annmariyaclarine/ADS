#include <stdio.h>
int queue[100],n;
int rear=-1;
int front=-1;
void main()
{
    void display();
    void enqueue();
    void dequeue();
    int choice;
    printf("Enter the limit");
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
    if(front<0 || front>rear)
    {
        printf("Queue is empty");
    }
    else
    {

        for(i=front;i<=rear;i++)
        {
            printf("%d,",queue[i]);
        }
    }
}
void enqueue()
{
    int data;
    if(rear==n-1)
    {
        printf("\n Queue is FULL \n");
    }
    else
    {
        printf("\nEnter the element to be inserted\n");
        scanf("%d",&data);
        if(front==-1)
        {
            front=0;
            rear=rear+1;
            queue[rear]=data;
        }
        else
        {
            rear=rear+1;
            queue[rear]=data;
        }
    }
}
void dequeue()
{
    int data;
    if(front<0 || front>rear)
    {
        printf("\nQueue is EMPTY\n");
    }
    else
    {
        data=queue[front];
        front=front+1;
        printf("\n Deleted element is %d\n",data);
    }
}

