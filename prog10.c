#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *left;
struct node *right;
}
node;
node *create()
{
node *p;
int x;
printf("Enter data(-1 for no data):");
scanf("%d",&x);
if(x==-1)
return NULL;
p=(node*)malloc(sizeof(node));
p->data=x;
printf("Enter left child of %d:\n",x);
p->left=create();
printf("Enter right child of %d:\n",x);
p->right=create();
return p;
}
void inorder(node *t)
{
if(t!=NULL)
{
inorder(t->left);
printf("\n %d",t->data);
inorder(t->right);
}
}
void main()
{
node *root;
root=create();
printf("\n The inorder traversal of tree is :\n");
inorder(root);
}
