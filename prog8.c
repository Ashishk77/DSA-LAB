#include<stdio.h>
#include<stdlib.h>
struct node
{
      int data;
      struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;

void Iqueue(int value)
{
      struct node*ptr;
      ptr=(struct node*)malloc(sizeof(struct node));
      ptr->data=value;
      ptr->next=NULL;
      if((front==NULL)&&(rear==NULL))
      {
            front=rear=ptr;
      }
      else
      {
            rear->next=ptr;
            rear=ptr;
      }
      printf("Node is insetrted\n");
}
int Dqueue()
{
      if(front==NULL)
      {
            printf("\n Underflow\n");
            return-1;
      }
      else
      {
            struct node*temp=front;
            int temp_data=front->data;
            front=front->next;
            free(temp);
            return temp_data;
      }
}
void display()
{
      struct node *temp;
      if((front==NULL)&&(rear==NULL))
      {
            printf("The queue is empty\n");
      }
      else      
      {
            printf("the queue is:\n");
            temp=front;
            while(temp){
            printf("%d--->",temp->data);     
                  temp=temp->next;
            }
            printf("NULL\n\n");
      }
}

                  
void search(int key)
{
      struct node*temp;
      int flag=0;
      temp=front;
      if((front==NULL)&&(rear==NULL))
      {
            printf("Empty list\n");
      }
      else
      {
            while(temp!=NULL)
            {
                  if(temp->data==key)
                  flag=1;
                  temp=temp->next;
            }     
      }
      if(flag==1)
      printf("Search is successiful\n");
      else
      printf("search is unsuccessiful\n");
}
int main()
{
      int choice,value,key;
      printf("\n Implimentation of queue using linked list\n");
      while(choice!=5)
      {
            printf("1.Iqueue\n 2.Dqueue\n 3.Display\n 4.Search\n 5.Exit\n");
            printf("\n enter your choice:");
            scanf("%d",&choice);
            switch(choice)
            {
                  case 1:printf("Enter the value to insert:");
                  scanf("%d",&value);
                  Iqueue(value);
                       break;
                  case 2:printf("deleted element is: %d\n",Dqueue());
                       break;
                  case 3:display();
                       break;
                  case 4:printf("Enter the key to be searched:\n");
                         scanf("%d",&key);
                       break;
                  case 5:exit(0);
                       break;
                  default:printf("\nWrong choice\n");
           }
     }
return 0;}                  
                 
                                                            
