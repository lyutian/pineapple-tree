#include<stdio.h>
#include<stdlib.h>
#include"singleLinkList.h"

LinkList *createLinkList(const int seq[], const int size)
{
	LinkList *head,*p;
	int i;
	if(size>0)
	{
		head=p=(LinkList*)malloc(sizeof(LinkList));
		p->data=seq[0];
		p->next=NULL;
	}
	else
	{
		printf("ERROR: The size of initial sequence is wrong!");
		return NULL;
	}

	for(i=1;i<size;i++)
	{
		p->next=(LinkList*)malloc(sizeof(LinkList));
		p=p->next;
		p->data=seq[i];
		p->next=NULL;
	}
	return head;
}

status printLinkList(LinkList *head)
{
	LinkList *p;
	p=head;

	if(NULL == p)
	{
		printf("There is no element in this linked-list!");
		return 0;
	}
	else
	{
		do
		{
			printf("%d\t",p->data);
			p=p->next;
		}while(NULL != p);
		printf("\n");
		return 1;
	}
}
