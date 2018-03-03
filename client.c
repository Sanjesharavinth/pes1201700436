#include<stdio.h>
#include<malloc.h>
#include "stack.h"
void main()
{
	int *p,n,ch,top=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	p=(int *)malloc(n*4);  //dynamic memory allocation
	
	
	
	printf("Enter choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:		{
					push(p,&n,&top);
					break;
					}
		case 2:		{
					pop(p,n,&top);
					break;
					}
		case 3:		{
					peek(p,n,&top);
					break;
					}
		default:	{
					printf("Enter a valid choice\n");
					break;
					}
	}
}