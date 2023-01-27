#include<stdio.h>
#include<stdlib.h>
struct Node
{
      struct Node *prev;
      int id;
      char name[20];
      char branch[10];
      char asp[10];

      struct Node *next;
};
struct Node *first=NULL;
struct Node *last=NULL;
struct Node *getnode()
{
      struct Node *p;
      p=(struct Node*)malloc(sizeof(struct Node));
      printf("\n Enter id,Name,branch,asp\n");
      p->prev=p->next=NULL;

      scanf("%d%s%s%s",&p->id,p->name,p->branch,&p->asp);
      return p;
}
void InsertFront(void)
{
      struct Node *p;
      p=getnode();
      if(first==NULL)
      first=last=p;
      else
      {
            p->next=first;
            first->prev=p;
            first=p;
      }
}
void InsertLast()
{
      struct Node *p;

      p=getnode();
      if(first==NULL)
      first=last=p;
      else
      {
            last->next=p;
            p->prev=last;
            last=p;
      }
}
void DeletFront()
{
      struct Node *p=first;
      if(first==NULL)
      {
            printf("List is empty\n");
            return;
      }
      if(first==last)
      first=last=NULL;
      else
      {
            first=first->next;
            first->prev=NULL;
      }
      printf("Deleted Record is\n");
      printf("<%d\t%s\t%s\t%s\t>\n",p->id,p->name,p->branch,p->asp);
      free(p);
}
void DeletLast()
{
      struct Node *p=last;
      if(first==NULL)
      {
            printf("List is empty...\n");
            return;
      }     
      if(first==last)
      first=last=NULL;
      else
      {
            last=last->prev;
            first->prev=NULL;
      }
      printf(" Deleted Record is \n");
      printf("<%d\t%s\t%s\t%s\t>\n",p->id,p->name,p->branch,p->asp);
      free(p);
}
void DispForward()
{
      struct Node *p;
      int cnt=0;
      if(first==NULL)
      {
            printf("\n List is Empty...\n");
            return;
      }
      printf("\nStatus of list");
      for(p=first;p!=NULL;p=p->next,cnt++)
      printf("<%d\t%s\t%s\t%s\t>\n",p->id,p->name,p->branch,p->asp);
      printf("Total number of elements in list: %d\n",cnt);
}
void main()
{
      int ch;
      while(1)
      {
            printf("_____MENU_____\n");
            printf("1.INSERTFRONT\n2.INSERTLAST\n3.DELETEFRONT\n4.DELETELAST\n5.DISPLAY");
            printf("\n\nEnter your choice:");

            scanf("%d",&ch);
            switch(ch)
            {
                  case 1:InsertFront();
                  break;
                  case 2:InsertLast();
                  break;
                  case 3:DeletFront();
                  break;
                  case 4:DeletLast();  
                  break;
                  case 5:DispForward();
                  break;
                  case 6: exit(0);
            }
      }
}








                       

