#include<stdio.h>
#include<stdlib.h>
# define MAX 4
int top=-1;
void push(int stack[],int item)
{
      if(top==(MAX-1))
      printf("\n\n Stack is overflow");
      else
      {
            stack[++top]=item;
       }
 }
 void pop(int stack[])
 {
      int ret;
      if(top==-1)
      printf("\n\n Stack is underflow ");
      else
      {
            ret=stack[top--];
            printf("\n Popped element is %d",ret);
       
       }           
 }
void display(int stack[])
  {   
      int i;
      if(top==-1)
      printf("\n stack is empty");
      else
      printf("\n The stack contents are:");
      for(i=top;i>=0;i--)
      printf("\n\n-----|%d|-----",stack[i]);
      printf("\n");
  }
void main()
{
       int item,stack[MAX],ch;
       while(1)
       {
       printf("\n\n-----MENU-----\n");
       printf("\n1.Push");
       printf("\n2.Pop");
       
       printf("\n3.Exit");
       printf("\n Enter your choice");
       scanf("%d",&ch);
       switch(ch)
       {
            case 1:printf("\n Enter a element to be pushed :");
              scanf("%d",&item);
              push(stack,item);
              display(stack);
              break;
            case 2 :pop(stack);
               if(top!=-1)
               display(stack);
              break;
      
            case 3: exit(0);
             break;
            default :printf("\n Invalid choice!...\n");
       }
}
}
       
      
              
       
       
       
       
       
       
       
       
       
       
       
       
       
       
           
