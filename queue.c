#include<stdio.h>
int stk[100],n, rear=0, front=0,c;
void dequeue(void);
void enqueue(void);
void display(void);
int main()
{

 printf("\nEnter the limit:");
 scanf("%d", &n);
do
{
 printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
 printf("\nEnter your choice:");
 scanf("%d", &c);
 switch(c)
 {
  case 1:
	 enqueue();
	 break;
  case 2:
	 dequeue();
	 break;
  case 3:
	 display();
	 break;
  default:printf("\nInvalid enter");
 }
}
while(c!=4);

 return 0;
}
void enqueue()
{int e;
 if(rear>n)
{
printf("Queue is overflow");
}
 else
{
printf("\n Enter no:");
scanf("%d",&e);
stk[rear]=e;
rear++;
} 
}
void dequeue()
{
if(front==rear)
{
 printf("Queue is empty");
}
else
{printf("element%d",stk[front]);
front++;
}
}
void display()
{
 if (rear!=front)
 {
  for(int i=front; i<rear; i++)
  {
   printf("\n%d",stk[i]);
  }
}
 else
 {
  printf("queue is empty");
 }
}

