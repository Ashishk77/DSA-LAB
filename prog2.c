
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
void main()
{
      int a[100];
      int i,choice;
      while(1)
      {
            printf("\n------MENU--------\n");
            printf("1.CREATE\n2.DISPLAY\n3.EXIT\n");
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
                  case 3:exit(0);
                  break;      
                  default:printf("\n Invalid choice:\n");
                  break;
            }
      }
}          
           

