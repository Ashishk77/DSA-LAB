#include<stdio.h>
#include<stdlib.h>
int n=0;
void Create(int a[])
{
      int i;
      printf("Enter the element for the array\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
}
void Display(int a[])
{ 
      int i;
      printf("\n The array elements are\n");
      for(i=0;i<n;i++)
      printf("%d\t",a[i]);
}
void Insert(int a[],int ele,int pos)
{
      int i;
      for(i=n-1;i>=pos;i--)
      a[i+1]=a[i];
      a[pos]=ele;
      n=n+1;
}
int Delete(int a[],int pos)
{
      int i,ele;
      ele=a[pos];
      for(i=pos;i<n-1;i++)
      a[i]=a[i+1];
      n=n-1;
      return ele;
}
void main()
{
      int a[100],i,pos,ele;
      int choice;
      while(1)
      {
            printf("\n------MENU--------\n");
            printf("1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.EXIT\n");
            printf("-----------\n");
            printf("Enter your choice\n");
            scanf("%d",&choice);
            switch(choice)
            {
                  case 1:printf("Enter the size of an array\n");
                  scanf("%d",&n);
                  Create(a);
                  break;
                  case 2:Display(a);
                  break;
                  case 3:printf(" Enter the valid position for new element\n");
                  scanf("%d",&pos);
                  printf("Enter the elements to be insert\n");
                  scanf("%d",&ele);
                  Insert(a,ele,pos);
                  break;
                  case 4:printf("Enter the positon of the element to be delete\n");
                  scanf("%d",& pos);
                  ele=Delete(a,pos);
                  printf("Deleted element is=%d",ele);
                  break;
                  case 5:exit(0);
                  break;
                  default:printf("invalid choice:\n");
                  break;
            }
      }
}
     
           















