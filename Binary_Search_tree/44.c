#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
	int data;
	struct tree * lc;
	struct tree * rc;
 } BST;
 int s[100],t =-1;
 void push(int v)
 {
        if(t ==99)
        {
            printf("error");
            return;
        }
        else{
            s[++t] = v;
            }
 }
 void pop ()
{
		if(t == -1)
		return;
		else
		{
			
			(t)--;
		}
}
 
   void trav(BST * );
   void hoff(BST **,int *);
 
  int main()
 {
 	 int i,count = 0;
	  BST * arr[6];
	  
 	 for(i=0;i<6;i++)
 	 { 
 	 	arr[i] = (BST*)malloc(sizeof(BST));
 	 	arr[i]->lc = arr[i]->rc = NULL;
	  }
	  printf("ENTER THE ELEMENTS:\n");
	  for(i=0;i<6;i++)
	  {
	  scanf("%d",&(arr[i]->data));	
	   }/*arr[0]->data = 5;
	  arr[1]->data = 15;
 	  arr[2]->data = 25;
	  arr[3]->data = 28;	
	  arr[4]->data = 30;
	  arr[5]->data = 32;*/
	  //BST* cur = arr[5];
	       
	  hoff(arr,&count);
        printf("\n\n starting traversal\n\n");
 
     { trav(arr[5]);
        printf("\n\n");
    }
     getchar();
    return 0;
 }
 
  void hoff (BST ** a, int* count)
  { BST* temp;
  	int k,j,l,i;
   
  	 printf("\n\n");
  
  	if(*count == 5)
  		{
  		    printf("%d",a[*count]->data);	
		  	return;
		}
	else
	{
       	  BST * current;
		  current = (BST*)malloc(sizeof(BST*));
		  current->lc =  (BST*)malloc(sizeof(BST*));
		  current->rc = (BST*)malloc(sizeof(BST*));
		 
		
         for(i=0;i<6;i++)
  	     printf("%d\t",a[i]->data);
  	     printf("\n");
  	     
  	      for(j=*count;j<6;j++)
		  	 {
                for(k = *count;k < 5;k++)
                {
                    if(a[k]->data > a[k+1]->data)
                    {
                       temp = a[k];
                       a[k] = a[k+1];
                       a[k+1] = temp;
                    }
                 }                        
             }  	
        for(i=*count;i<6;i++)
  	     printf("%d\t",a[i]->data);
  	     printf("\n");  	 
            
		  current->data = a[*count]->data+a[*count+1]->data;
          if(a[*count]->data > a[*count+1]->data)
		  {
		  	current->rc = a[*count];
		     
		  	current->lc = a[*count+1];
		  	 printf ("   %d\n%d\t%d\n",current->data,current->lc->data,current->rc->data); 
		  }
		  else
		  { 
			current->lc = a[*count];
		  	current->rc = a[*count+1];  
            printf ("   %d\n%d\t%d\n",current->data,current->lc->data,current->rc->data); 	
		  }
		 printf("%d replacing %d\n",current->data,a[*count+1]->data);
		  	 a[*count+1] =current;	
		    printf("%d  %d\n",a[*count+1]->lc->data,a[*count+1]->rc->data);   
			  	 int r,c;
           
    (*count)++;   
  	printf("\n");
  	hoff(a,count);
}
  
}

  void trav ( BST *r)
  {     BST * root = r;
        int i;
         if(r->lc!= NULL)
	 	    {    
                push(0);
                trav(r->lc);
            }
            if(r->lc == NULL&&r->rc==NULL)
	           { 
                    printf("value = %d  ",r->data);
                    for(i=0;i<=t;i++)
                    printf("%d ",s[i]);
                    printf("\n");
                    pop();
                }      
                   
	       if(r->rc!= NULL)
	        {
                push(1);
                trav(r->rc);
            } 
            if(r->lc!= NULL||r->rc!=NULL)
             pop();
           // printf(" exiting %d\n",r->data);
  }
  
