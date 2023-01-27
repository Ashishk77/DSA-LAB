#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
      int val;
      struct node*next;
};
struct node*head;
void main()
{
      int choice=0;
      printf("\n******stack operation using linked list******\n");
      printf("\n--------\n");
      while(choice!=4)
      {
            printf("\n\n choice one from the below options\n ");
            printf("\n 1.push\n 2.pop\n 3.show\n 4.exit\n");
            scanf("%d",&choice);
            switch(choice)
            {
                  case 1:
                  {
                        push();
                        break;
                  }
                  case 2:
                  {
                        pop();
                        break;
                  }
                  case 3:
                  {     
                        display();
                        break;
                  }
                  case 4:
                  {
                        printf("exiting....");
                        break;
                  }
                  default:
                  {
                        printf("enter your valid  choice");
                        
                  }
              };
           }
}
void push()
{
      int val;
      struct node*ptr=(struct node*)malloc(sizeof(struct node));
      if(ptr==NULL)
      {
            printf("not able to push the element");
      }
      else
      {
            printf("enter the value");
            scanf("%d",&val);
            
      if(head==NULL)
      {
             ptr->val=val;
             ptr->next=NULL;
             head=ptr;
      }      
      else
      {
            ptr->val=val;
            ptr->next=head;
            head=ptr;
      }
      printf("item pushed");
     }
}
void pop()
{
      int item;
      struct node*ptr;
      if(head==NULL)
      {
            printf("under flow");
      }
      else
      {
            item=head->val;
            printf("item popped=%d",item);
            ptr=head;
            ptr=head->next;
            free(ptr);
       }
}
void display()
{
      int i;
      struct node*ptr;
      ptr=head;
      if(ptr==NULL)
      {
            printf("stack is empty\n");
      }
      else
      {
            printf("printing stack element\n");
            while(ptr!=NULL)
            {
                  printf("%d\n",ptr->val);
                  ptr=ptr->next;
            }
       }
 }                                                          
                  
                     
      
