// test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include<malloc.h>
#include <string>
#include <iostream>
#include<stack>
using namespace  std;
struct ListNode
{
int data;
ListNode *next;
};
void printReverse(ListNode *head)
{
ListNode *p;
p = head;
	if(head == NULL)
	return;
std::stack<ListNode*>nodes;
	while(p)  //��ջ
	{
		nodes.push(p);
		p = p->next;
	}   
	while(!nodes.empty())  //��ջ
	{
		p =  nodes.top();
		printf("%d\n",p->data);
		nodes.pop();
	}

}
int _tmain(int argc, _TCHAR* argv[])
{
	//�½�����
	ListNode *head,*temp,*p;
	head  =(ListNode*) malloc(sizeof(ListNode));
	head->next = NULL;
	for(int i =0;i<5;i++)
	{
		temp =(ListNode*) malloc(sizeof(ListNode));
		temp->data = i;
		temp->next = NULL;
		if(i == 0)
		{
			head = temp;
			p = head;
		}
		else
		{
			
			p->next = temp;
			p = p->next;
		}
	      
	}
	printReverse(head);
	//�ͷ�����
	p = head;
	while(p != NULL)
	{
	temp = p->next;
	free(p);
	p = temp;
	

	}

	system("pause");
	return 0;
}
