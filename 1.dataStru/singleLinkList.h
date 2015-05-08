/* 
 * Name:	Single Linked List
 * Author:	Reynold Liu
 * Date:	2014/11/8
 * E-mail:	lyutian623@163.com
*/

#ifndef __SINGLELINKLIST__
#define __SINGLELINKLIST__
typedef int status;

typedef struct node
{
	int data;
	struct node *next;
}LinkList;

LinkList *createLinkList(const int seq[],const int size);

status printLinkList(LinkList *head);

#endif
