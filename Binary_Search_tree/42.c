#include<stdio.h>
void insert(int *a, int x,int ** lc ,int** rc );
int ind( int k,int *a);
int main()
{
	int a[5],i,j=0;
	int *lc[] = {NULL,NULL,NULL,NULL,NULL};
	int *rc[] = {NULL,NULL,NULL,NULL,NULL};
	printf("ENTER THE VALUES:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
		insert(a,a[i],lc,rc);
	
	printf("VALUES:\t");
	
	for(i=0;i<5;i++)
	printf("%d\t",a[i]);	
		
	printf("\nLEFT CHILD:\t");
	for(i=0;i<5;i++)
	{
		if(lc[i]!= NULL)
			printf("%d\t",*lc[i]);
		else
			printf("-1\t");
	}
	
	printf("\nRIGHT CHILD:\t");
		for(i=0;i<5;i++)
	{
		if(rc[i]!= NULL)
			printf("%d\t",*rc[i]);
		else
			printf("-1\t");
	}
	return 0;
}
	
	int ind(int k,int *a)
	{
		int i=0;
		for(i=0;i<5;i++)
		{
			if(a[i]==k)
			break;
		}
		return i;
	}
	
	void insert(int *a,int x,int ** lc ,int** rc)
	{
		int i,j=0,k;
 		
		 if( x<a[j] && (lc[j] == NULL))
		 {
	//	 	printf("going in lc %d\n\n",x);
		 		k = ind((x),a);
		 	lc[j] = &a[k];
		 }

		else if(x<a[j] && (lc[j] != NULL))
 		{
		 
 				j=0;
 	//		printf("%d going for recursion lc %d\n\n",x,j);
 				while(lc[j]!= NULL)
				 {
				 	//	printf("%d\n",*lc[j]);
				 		j = ind((*lc[j]),a);
				}
					k = ind((x),a);
					lc[j] = &a[k];		
		 }
		
		  if(x>a[j]&& (rc[j] == NULL))
		 {
		 	k = ind((x),a);
		 	rc[j] = &a[k];
	//	 		printf("going in rc %d\n\n",x);
		 }
		  
		  else if(x>a[j] && (rc[j]!= NULL))
		 {
				j=0;		 	
	//	 		printf("%d going for recursion rc %d\n\n",x,j);
 					while(rc[j]!= NULL)
				 {
				 	//	printf("%d\n",*rc[j]);
					 	j = ind((*rc[j]),a);
				}
					k = ind((x),a);
					rc[j] = &a[k];		
		 }
	}


	
