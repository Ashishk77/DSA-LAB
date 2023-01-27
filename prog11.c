#include<stdio.h>
#include<stdlib.h>
struct Btree
{
      struct Btree *lchild;
      struct Btree *rchild;
      int data;
    
};
struct Btree *Insert(struct Btree *root,int ele)
{
      struct Btree *temp,*prev=NULL,*cur;
      temp=(struct Btree*)malloc(sizeof(struct Btree));
      temp->data=ele;
      temp->lchild=temp->rchild=NULL;
      if(root==NULL)
      return(root=temp);
      cur=root;
      while(cur!=NULL)
      {
            prev=cur;
            if(ele<cur->data)
            cur=cur->lchild;
            else
            cur=cur->rchild;
      }
      if(ele<prev->data)
      prev->lchild=temp;
      else
      prev->rchild=temp;
      return root;
}
void Inorder(struct Btree *ptr)
{
      if(ptr!=NULL)
      {
            Inorder(ptr->lchild);
            printf("%d\t",ptr->data);
            Inorder(ptr->rchild);
      }
}
void preorder(struct Btree *ptr)
{
      if(ptr!=NULL)
      {     
            printf("%d\t",ptr->data);
            preorder(ptr->lchild);
            preorder(ptr->rchild);
      }
}
void postorder(struct Btree *ptr)
{
      if(ptr!=NULL)
      {
            postorder(ptr->lchild);
            postorder(ptr->rchild);
            printf("%d\t",ptr->data);
      }
}
int search(struct Btree *root,int key)
{
      struct Btree *cur=root;
      while(cur!=NULL)
      {
            if(key==cur->data)
            return 1;
            if(key<cur->data)
            cur=cur->lchild;
            else
            cur=cur->rchild;
      }
      return 0;
}
int main()
{
      struct Btree *root=NULL;
      int i,ch,n,key,flag,ele;
      while(1)
      {
            printf("\n\n____MENU____\n1.Insert\n2.Treversal\n3.searchBST\n4.exit\n");
            printf("Enter your choice:");
            scanf("%d",&ch);
            switch(ch)
            {
                  case 1:printf("\nEnter the number of elements to be inserted :");
                  scanf("%d",&n);
                  printf("Enter the elements to be inserted...\n");
                  for(i=0;i<n;i++)
                  {
                        scanf("%d\n",&ele);
                        root=Insert(root,ele);
                  }
                  break;
                  case 2:printf("\n preorder sequence....\n");
                  preorder(root);
                  printf("\n Inorder sequencw...\n");
                  Inorder(root);
                  printf("\n post sequence...\n");
                  postorder(root);
                  break;
                  case 3:printf("\nEnter key to besearch\n");
                  scanf("%d",&key);
                  flag=search(root,key);
                  if(flag)
                  printf("\n Key is found \n");
                  else
                  printf("\n Key is not found..\n");
                  break;
                  case 4: exit(0);
                  default :printf("\n wrong choice try again");
            }
      }
}








                   
                  
