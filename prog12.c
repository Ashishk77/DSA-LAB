#include<stdio.h>
#include<stdlib.h>
#define MAX_Size 25
struct TreeNode
{
      int val;
      struct TreeNode*left;
      struct TreeNode*right;
};
struct freenode*root=NULL;
void insert(int);
int height(struct treeNode*);
void level order()
int main()
{
      int user_choice,node_data;
      while(1)
      {
            printf("\n\n------Binary Tree-------\n\n");
            printf("\n1.Insert");
            printf("\n2.Height");
            printf("\n3.level order Traversal");
            printf("\n4.Exit");
            printf("\n\nEnter your choice:");
            scanf("%d",&user_choice);
            printf("\n");
            switch(user_choice)
            {
                  case1: printf("enter the number of nodes:");
                  scanf("%d",&n);
                  for(i=0;i<n;i++)
                  {
                        printf("Enter data for new node:");
                        scanf("%d",&node_data);
                        insert(node_data);
                  }
                  break;
                  case2: printf("height of the tree is:%d",height(root));
                  break;
                  case3: printf("level order traversal\n\n);
                  level order();
                  break;
                  case4: printf("program terminated-----\n\n");
                  exit(0);
                  default:printf("invalid choice");
            }
        }
        return 0;
}
struct TreeNode*create(int data)
{
      struct treeNode*new_node=(struct treeNode*)
      malloc(size of(struct TreeNode));
      if(new_node==NULL)
      {
            printf("\n memory can not be allocated for new node\n");
            return NULL;
      }
      new_node->left=NULL;
      new_node->right=NULL;
      new_node->val=data;
      return new_node;
}
void insert(int data)
{
      if(root==NULL)
      {
            struct TreeNode*new_node=create(data);
            if(new_node)
            {
                  root=new_node;
                  printf("\n*Node with data %d was insertwd",data);
            }
            return;
      
}
struct TreeNode*queue[MAX_SIZE];
struct TreeNode*new_node=NULL;
int front=-1;
int rear=-1;
queue[front+1]=root;
front=rear=0;
while(front<=rear)
{
      struct treeNode*temp=queue[front];
      front++;
      if(temp->left!=NULL)
      {
            queue[++rear]=temp->left;
      }
      else
      new node=create(data);
      if(new_node)
      {
            temp->left=new_node;
            printf("\n*Node with data %d was inserted",data);
      }
      return;
}
if(temop->right!=NULL)
{
      queue[++rear]=temp->right;
}
else
{
      new_node=create(data);
      if(new_node)
      {
            temp->right=new_node;
            printf("\n*Node with data %d was inserted",data);
      }
      return;
    }
  }    
}                                    
 int height[struct TreeNode*root]
 {
      if(root==NULL)
      {
            return 0;
      }
      int left=height(root->left);
      int right=height(root->right);
      if(left->right)
      {
            return left+1;
      }
      else
      {
            return right+1;
      }
}
void level order()
{
      if(rooy==NULL)
      {
            printf("Tree is Empty!");
      }      
            struct TreeNode*queue[MAX_SIZE];
            int front=-1;
            int rear=-1;
            queue[front+1]=root;
            front=rear=0;
            while(front<=rear)
            {
                  struct TreeNode*temp=queue[front];
                  front++;
                  printf("%d",temp->val);
                  if(temp->left!=NULL)
                  {
                        queue[++rear]=temp->left;
                  }
                  if(temp->right!=NULL)
                  {
                        queue[++rear]=temp->right;
                  }
            }
}
                              
                                                                     
