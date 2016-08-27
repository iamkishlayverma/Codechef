#include<stdio.h>
#include<stdlib.h>

typedef struct tree
 {
    int data,rtag,ltag;
    struct tree* rc;
    struct tree* lc;
  }BST;
  BST* q[10];
  int t =-1,f =0;
  void nonrec_trav(BST *r);  
  void in(BST** q,BST *r)
  {
        q[++t] = r;
    }
  void INST (BST **, int);
  void BUILDQ( BST *);
  void NEXT (BST **);
 
  int main()
  {
    int i,val;
    BST *head = NULL;
 	printf("ENTER THE ELEMENTS:\n");
	for(i=0;i<5;i++)
 	{
     	 scanf("%d",&val);
    	 INST (&head ,val);
    }
  
 	BUILDQ(head);
    for(i=0;i<=t;i++)
    printf(" %d ",q[i]->data);
    NEXT(&head);
    nonrec_trav(head);
    for(i=0;i<10;i++)
    free(q[i]);
     getchar();
    getchar();
    return 0;
   }
            
 void INST (BST ** root, int val)
 {
 		if(*root == NULL)
 		{
		 	*root = (BST*)malloc(sizeof(BST));
			 (*root)->data = val;
			 (*root)->lc = (*root)->rc = NULL;
		}
 		
		 else if((*root)->data<val )
 		{
 			INST(&((*root)->rc),val);
		}
		 
		 else if((*root)->data > val )
 		{
 			INST(&((*root)->lc),val);
		}
		else
			printf("Duplicate data\n");
 }
 
void BUILDQ (BST* r )
{
  	if(r == NULL)
 	{
	 		return;
	}		
	else 
    {
        BUILDQ(r->lc);
        in(q,r);
        BUILDQ(r->rc);
    }
 }
void NEXT (BST ** r)
{
    if((*r) == NULL)
    {
        return ;
    }
    else
    {
        NEXT(&((*r)->lc));
        q[f++];
        if((*r)->rc != NULL)
        NEXT(&((*r)->rc));
        else
        {    
            (*r)->rc = q[f];
            // printf(" \n%d -> %d\n",(*r)->data,(*r)->rc->data);
        }
    }
}
void nonrec_trav(BST *r)
{
    int i;
    while(r->lc!=NULL)
    {
        r = r->lc;
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d\n",r->data);
        r = r->rc;
    }
}

    
          
