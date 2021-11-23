#include<stdio.h>
int stk[100],c,n,s,tp=-1;
void push(void);
void pop(void);
void display(void);
int main()
{

 printf("\nEnter the limit:");
 scanf("%d", &n);
do
{
 printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
 printf("\nEnter your choice:");
 scanf("%d", &c);
 switch(c)
 {
  case 1:
	 push();
	 break;
  case 2:
	 pop();
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
void push()
{
 if(tp>n)
 {
  printf("OVerflow");
 }
 else
 {
  printf("Enter the element to push");
  scanf("%d", &s);
  stk[tp+1]=s;
  tp++;
   }
}
void pop()
{
 if(tp<=-1)
 {
  printf("Underflow");
 }
 else
 {
 printf("Element to pop%d",stk[tp]);
 tp--;
 }
}
void display()
{
 if (tp>0)
 {
  for(int i=tp; i>=0; i--)
  {
   printf("\n%d",stk[i]);
  }
}
 else
 {
  printf("Stack is empty");
 }
}
 
