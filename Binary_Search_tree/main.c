#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
  int data;
  struct BST *LC,*RC;
}BST;
void INST();
void INOR();
void PRE();
void POST();
void DEL();
int FINDMIN();
int main(void)
{


   BST *head=NULL;
   int n=1,val,target;
    while(n)
   {
     printf("1-INSERT DATA IN YOUR BST\n2-DISPLAY USING INORDER\n3-DISPLAY USING PREORDER\n4-DISPLAY USING POSTORDER\n5-DELETE ANY NODE YOU WANT\n0-exit\n");
     printf("enter your choice\n");
     scanf("%d",&n);
     switch(n)
     {
      case 1:printf("\nenter the data\n");
             scanf("%d",&val);
	     INST(&head,val);
             break;
      case 2:INOR(head);
            break;
      case 3:PRE(head);
            break;
      case 4:POST(head);
            break;
      case 5:printf("ENTER THE DATA TO DELETE:");
            scanf("%d",&target);
            DEL(head,target);
            break;
      }
   }
   return 0;
}
void INST(BST **root,int value)
{
   if(*root==NULL)
    {
     (*root)=(BST*)malloc(sizeof(BST*));
     (*root)->data=value;
     (*root)->RC=(*root)->LC=NULL;
    }
    else if(((*root)->data)>value)
       {
        INST(&((*root)->LC),value);
       }
    else if(((*root)->data)<value)
       {
        INST(&((*root)->RC),value);
       }
    else
    {
      printf("\nduplicate value\n");
    }
}
void INOR(BST *root)
{
   if(root==NULL)
    return;
   if(root->LC!=NULL)
     {
      INOR(root->LC);
     }
    printf("data is =%d",root->data);
    printf("\n");
   if(root->RC!=NULL)
   {
    INOR(root->RC);
   }
}
void PRE(BST *root)
{
   if(root==NULL)
    return;
   else
   {
    printf("data is =%d",root->data);
    printf("\n");
    if((root->LC)!=NULL)
     {
      PRE(root->LC);
     }
    if((root->RC)!=NULL)
    {
     PRE(root->RC);
    }
   }
}
void POST(BST *root)
{
    if(root==NULL)
    return;
   else
  {
    if((root->LC)!=NULL)
   {
     POST(root->LC);
   }
    if((root->RC)!=NULL)
   {
     POST(root->RC);
   }
  }
  printf("data is =%d",root->data);
  printf("\n");
}
void DEL(BST *root,int data)
{
    if(root==NULL)
        return;
    else if(data<(root->data))
    {
        DEL(root->LC,data);
    }
    else if(data>(root->data))
    {
        DEL(root->RC,data);
    }
    else
    {
        if(root->LC==NULL&&root->RC==NULL)
        {
            free(root);
            root=NULL;
        }
        else if(root->LC==NULL)
        {
            BST *temp=root;
            root=root->RC;
            free(temp);
        }
        else if(root->RC==NULL)
        {
            BST *temp=root;
            root=root->LC;
            free(temp);
        }
        else
        {
            BST *temp=FINDMIN(root->RC);
            root->data=temp->data;
            DEL(root->RC,temp->data);
        }
    }
}
int FINDMIN(BST *min)
{
    BST *current=min;
    while(current->LC!=NULL)
    {
        current=current->LC;
    }
    return current;
}
