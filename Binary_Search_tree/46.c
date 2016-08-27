#include<stdio.h>
#include<stdlib.h>
#define size 6
typedef struct btree {
    char data;
    struct btree * lc,*rc;
}BST;

BST* newnode(char data);
BST* build(char* in, char* pre,int instrt,int inend);
int search(char*,int,int,char);
void trav (BST*);
int main()
{
      BST *head = NULL;
    char inod[6],preod[6];
    int i,instrt =0;
    printf("ENter the inorder exxprns\n");
    for(i=0;i<size;i++)
   {
        getchar();
         scanf("%c",&inod[i]);
    }
    printf("enter the preoder expression\n");
    for(i=0;i<size;i++)
    {
        getchar();
        scanf("%c",&preod[i]);
    }
     char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
     char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
      head = build(in,pre,0,size-1);
    printf("%c %c %c %c %c",head->data,head->lc->data,head->lc->lc->data,head->lc->rc->data,head->rc->data);
    trav(head);
    getchar();
    return 0;
}

BST* build(char in[], char pre[], int instrt,int inend)
{
   static int preindex =0;
       if(instrt>inend)
       {
            return NULL;
        }
    BST* tnode = newnode(pre[preindex++]);
          
    if(instrt == inend)
       {     
            return tnode;
    }   
   int  inindex = search(in,instrt,inend,tnode->data);
   
        tnode->lc = build(in,pre,0,inindex-1);
        tnode->rc = build(in,pre,inindex+1,inend);
       
       return tnode; 
    }

BST* newnode(char data)
{
    BST* tnode = (BST*)malloc(sizeof(BST));
    tnode->data = data;
    tnode->lc = NULL;
    tnode->rc = NULL;
    return tnode;
}

int search(char in[],int start,int End,char d)
{
    int k;
    for(k=start ; k <=End ; k++)
    {
        if(in[k] == d)
           return k;
    }
}
void trav(BST* root)
{    if(root == NULL) 
        return;
        
        trav(root->lc);
    
        printf("%c ",root->data);
    
        trav(root->rc);
}
