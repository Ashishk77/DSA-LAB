#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 25

struct TreeNode
{
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
};
struct TreeNode *root=NULL;
void insert(int);
int height(struct TreeNode*);
void levelorder();

int main()
{
      int user_choice,node_data;
      int n;
      while(1)
      {
            printf("\n\n ____Binary Tree____\n\n");
            printf("\n1.Insert");
            printf("\n2.Height");
            printf("\n3.Levelorder Traversal");
            printf("\n4.Exit");
            printf("\n\nEnter your choice");
            scanf("%d",& user_choice);

            printf("\n");
            switch(user_choice)
            {

                  case 1: printf("Enter the number of nodes:");
                  scanf("%d",&n);
                  for(int i=0;i<n;i++)
                  {
                        printf("\nEnter data for new node:");
                        scanf("%d",&node_data);
                        insert(node_data);
                  }
                  break;
                  case 2:
                  printf("Height of the tree is:%d",height(root));
                  break;
                  case 3:
                  printf("Level order traversal\n\n");
                  levelorder();
                  break;
                  case 4:
                  printf("Program is terminated...\n\n");
                  exit(0);
                  default:
                  printf("Invalid choice");
            }
      }
      return 0;
}
struct TreeNode *create(int data)
{
      struct TreeNode *new_node=(struct TreeNode*)malloc(sizeof(struct TreeNode));
      if(new_node == NULL)
      {
            printf("\n Memory cannot be allocated for new node");
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
            struct TreeNode *new_node=create(data);
            if(new_node)
            {
                  root=new_node;
                  printf("\n *node with data %d was inserted",data);
            }
            return;
      }
      struct TreeNode *queue[MAX_SIZE];
      struct TreeNode *new_node=NULL;
      int front=-1;
      int rear=-1;
      queue[front+1]=root;
      front=rear=0;
      while(front<=rear)
      {
            struct TreeNode *temp=queue[front];
            front++;
            if(temp->left!=NULL)
            {
                  queue[++rear]=temp->left;
            }
            else
            {
                  new_node=create(data);
                  if(new_node)
                  {
                        temp->left=new_node;
                        printf("\n *node with data %d was inserted",data);
                  }
                  return;
            }
            if(temp->right!=NULL)
            {
                  queue[++rear]=temp->right;
            }
            else
            {
                  new_node=create(data);
                  if(new_node)
                  {
                        temp->right=new_node;
                        printf("\n *node with data %d was inserted",data);
                  }
                  return;
            }
      }
}
int height(struct TreeNode *root)
{
      if(root==NULL)
      {
            return 0;
      }
      int left=height(root->left);
      int right=height(root->right);
      if(left>right)
      {
            return left+1;
      }
      else
      {
            return right+1;
      }
}
void levelorder()
{
      if(root==NULL)
      {
            printf("Tree is Empty");
            return;
      }
      struct TreeNode *queue[MAX_SIZE];
      int front=-1;
      int rear=-1;
      queue[front+1]=root;
      front=rear=0;
      while(front<=rear)
      {
            struct TreeNode *temp=queue[front];
            front++;
            printf("%d\t",temp->val);
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


