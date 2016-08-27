#include<stdio.h>
#include<stdlib.h>
void INST();
void INOR();
void PREOR();
void POSTOR();
int DEL();
/*bst* minValueNode();*/
typedef struct tree
{
	int data;
	struct tree *lc,*rc;
}bst;

int main()
{
	bst *head=NULL;
	int n=1,val,tar;
	while(n)
	{
		printf("\nPRESS 1 TO INSERT\nPRESS 2 FOR INORDER TRAVERSAL\nPRESS 3 FOR PREORDER TRAVERSAL\nPRESS 4 FOR POSTORDER TRAVERSAL\nPRESS 5 TO DELETE\nPRESS 0 TO EXIT\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("ENTER THE VALUE:");
				scanf("%d",&val);
				INST(&head,val);
				break;
			case 2:INOR(head);
				break;
			case 3:PREOR(head);
				break;
			case 4:POSTOR(head);
				break;
			case 5:printf("ENTER THE TARGET:");
				scanf("%d",&tar);
				DEL(head,tar);
				break;
		}
	}
	return 0;
}
void INST(bst **root,int v)
{
	if((*root)==NULL)
	{
		(*root)=(bst*)malloc(sizeof(bst));
		(*root)->data=v;
		(*root)->lc=(*root)->rc=NULL;
	}
	else if((*root)->data<v)
	{
		INST(&((*root)->rc),v);
	}
	else if((*root)->data>v)
	{
		INST(&((*root)->lc),v);
	}
	else
	{
		printf("DUPLICATE DATA\n");
	}
}
void INOR(bst *r)
{
	if(r==NULL)
	{
		return;
	}
	if(r->lc!=NULL)
	{
		INOR(r->lc);
	}
	printf("%d\t",r->data);
	if(r->rc!=NULL)
	{
		INOR(r->rc);
	}
}
void PREOR(bst *r)
{
	if(r==NULL)
        {
                return;
        }
	printf("%d\t",r->data);
	if(r->lc!=NULL)
        {
                INOR(r->lc);
        }
	if(r->rc!=NULL)
        {
                INOR(r->rc);
        }
}
void POSTOR(bst *r)
{
	if(r==NULL)
        {
                return;
        }
	if(r->lc!=NULL)
        {
                INOR(r->lc);
        }
	if(r->rc!=NULL)
        {
                INOR(r->rc);
        }
	printf("%d\t",r->data);
}
bst * minValueNode(bst* node)
{
    bst* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current->lc != NULL)
        current = current->lc;
 
    return current;
}

int DEL(bst *root, int key)
{
	if (root == NULL)
	{
		return root;
	}
	if (key < root->data)
        {
		root->lc= DEL(root->lc, key);
        }
	else if (key > root->data)
        {
		root->rc= DEL(root->rc, key);
        }
	else
	{
		if (root->lc == NULL)
       		{
                bst *temp = root->rc;
               	free(root);
               	return temp;
        	}
        	else if (root->rc == NULL)
        	{
        	bst *temp = root->lc;
                free(root);
                return temp;
        	}	 
        	bst* temp = minValueNode(root->rc);
        	root->data = temp->data;
        	root->rc=DEL(root->rc, temp->data);
	}
        return root;
}
