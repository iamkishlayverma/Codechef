#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
#define size 100

void push(char *b,int *top,char c)
{

   if(*top==(size-1))
        return;
   else
   {
       (*top)++;
       b[*top]=c;
    }
}

void push2(char c,char *postfix,int postfixindex)
{
    postfix[postfixindex]=c;
}
char pop(char *b,int *top)
{
    char val;
    /*if(*top==-1)
        return;*/
    //else
    {
        val=b[*top];
        (*top)--;
        return val;
    }
}
//main function
int main()
{
   int n,i,j,length;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       char a[100],b[size],postfix[size],top=-1,postfixindex=0;
       scanf("%s",a);
       length=strlen(a);
       for(j=0;j<length;j++)
       {
           if(a[j]=='(')
               {
                push(b,&top,a[j]);
               }
            else if(isdigit(a[j]))
                {
                    push2(a[j],postfix,postfixindex);
                    postfixindex++;
                }
            else if(a[j]=='(')
            {
              char z;
              z=pop(b,&top);
              push2(z,postfix,postfixindex);
              postfixindex++;
            }
            else
                push(b,&top,a[j]);
       }

   }
   return 0;
}
