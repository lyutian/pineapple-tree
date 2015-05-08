#include<stdio.h>
#include"singleLinkList.h"

int main()
{
	int seq[]={1,2,3,4,5,6,7,8,9};
	int size;
	size=sizeof(seq)/sizeof(seq[0]);
	LinkList *head;
	head=createLinkList(seq,size);
	printLinkList(head);
	return 0;
}
