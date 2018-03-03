#include "stack.h"
void push(int x[],int *a,int *top)

{	int b;
	
	if(*top==(*a)-1)
		printf("stack is full");
	else	
	{
		printf("enter number");
		scanf("%d",&b);
		(*top)++;
		x[*top]=b;
	}
}

void pop(int x[],int a,int *top)
{
	if(*top==-1)
		printf("Stack is empty");
	else{
		printf("popped element:%d",x[*top]);
		(*top)--;
	}
}


void peek(int x[],int a,int *top)
{
	if(*top==-1)
	{
		printf("stack is empty");
	}
	else{
		printf("Peek element:%d",x[*top]);
	}
}