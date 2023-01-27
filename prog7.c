#include<stdio.h>
#include<stdlib.h>
struct node
{
      int data;
      
      struct node*next;
};
int display(struct node*head)
{
      struct node*temp;
      temp=head;
      if(temp==NULL)
      {
            printf("empty list\n");
      }
      else
      {
            printf("-------concatenation---------\n");
            while(temp!=NULL)
            {
                  printf("%d\t",temp->data);
                  temp=temp->next;
            }
      }
}
void concatenate(struct node*a,struct node*b)
{
      if(a!=NULL && b!=NULL)
      {
            if(a->next==NULL)
            a->next=b;
            else
            concatenate(a->next,b);
      }
      else
      {
            printf("either a or b is null\n");
      }
}

int main()
{
      struct node*prev,*a,*b,*p;
      int n,i,key;
      printf("number of nodes in a:");
      scanf("%d",&n);
      printf("enter %d of elements\n",n);
      a=NULL;
      for(i=0;i<n;i++)
      {
            p=malloc(sizeof(struct node));
            scanf("%d",&p->data);
            p->next=NULL;
            if(a==NULL)
            a=p;
            else
            prev->next=p;
            prev=p;
      }
      printf("number of nodes in b:");
      scanf("%d",&n);
      printf("enter %d of elements\n",n);
      b=NULL;
      for(i=0;i<n;i++)
      {
            p=malloc(sizeof(struct node));
            scanf("%d",&p->data);
            p->next=NULL;
            if(b==NULL)
            b=p;
            else
            prev->next=p;
            prev=p;
      }
      concatenate(a,b);
      display(a);
      printf("\n-----------\n");
      printf("\n enter the key elements to be searched\n");
      scanf("%d",&key); 
      return 0;
}                                  
      
      
                        
