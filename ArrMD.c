 #include<stdio.h>
 void main()
{
 int arr[100],n,z;
 printf("Enter the limit:");
 scanf("%d", &n);
 printf("\nEnter the numbers:");
 for(int i=0; i<n; i++)
{
 scanf("%d",&arr[i]);
}
 printf("Array elements are:");
 for(int i=0;i<n;i++)
{
 printf("%d",arr[i]);
 printf("\n");
}
 printf("\n1.Insert \n2.Delete \n3.Search\n");
printf("Enter your Choice:\t");
 scanf("%d",&z);
 if(z==1)
{
 int num, pos;
 printf("Enter element to insert : ");
 scanf("%d", &num);
 printf("Enter the element position : ");
 scanf("%d", &pos);
 if(pos>n+1||pos<= 0)
{
 printf("Invalid position");
}
 else
{
 for(int i=n; i>=pos; i--)
{
 arr[i] = arr[i-1];
}
 arr[pos-1] = num;
 n++; 
 printf("Array elements after insertion : ");
 for(int i=0; i<n; i++)
{
 printf("%d\t", arr[i]);
}
}
}
 else if(z==2)
{
 int h;
 printf("enter position to be deleted");
 scanf("%d",&h);
 if(h<0||h>n)
{
 printf("Invalid position");
}
 else
{
 for(int i=h-1; i<n-1; i++)
{
 arr[i] = arr[i + 1];
}
 printf("array elements\n");
 for(int i=0;i<n-1;i++)
 printf("%d\n",arr[i]);
}
}
 else if(z==3)
{
 int ele, i, *p;
 p=arr;
 printf("\nEnter the element to be searched:");
 scanf("%d",&ele);
 for(i=0; i<=n; i++)
{
 if(ele==*p)
{
 printf("Element present,Postion=%d",i+1);
}
p++;
}
}
}

