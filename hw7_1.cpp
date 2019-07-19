#include<iostream>

using namespace std;

typedef struct node{
	int data;
	struct node*next;
}NODE;
int main()
{
	NODE *head  = new NODE;
	NODE *tail = head;
	
	head->data=1;
	head->next=NULL;
	for (int i=0;i<9;i++)
	{
		NODE *node = new NODE;
		node->data = i+2;
		node->next = tail->next;
		tail->next = node;
		tail = node;
	}
	NODE *p = head;
	while (p !=NULL){
		cout << p->data ;
		p=p->next;
	}
		cout <<endl;
	NODE *node = new NODE;
	node->data = 0;
	node->next = tail->next;
	tail->next = node;
	tail = node;
	p = head;
	while (p !=NULL){
		cout << p->data ;
		p=p->next;
	}
		cout <<endl;
	NODE *prev =head;
	NODE *now = head;
	/*分别删除3与5
	while(now->data != 3){
		prev= now;	
		now = now->next;
	}
	prev->next = now->next;
	p = head;
	while (p !=NULL){
		cout << p->data <<endl;
		p=p->next;
	}
	prev =head;
	now = head;
	while(now->data != 5){
		prev= now;	
		now = now->next;
	}
	prev->next = now->next;
	p = head;
	while (p !=NULL){
		cout << p->data <<endl;
		p=p->next; 
	}*/
	
	//同一链表内删除3与5
	prev =head;
	now = head;
	while(now->next != NULL){
		prev= now;	
		now = now->next;
		if (3==now->data||5==now->data){
				prev->next=now->next;
		}
	}
	p = head;
	while (p !=NULL){
		cout << p->data  ;
		p=p->next; 
	}
		cout <<endl;
	now = head;
	//寻找4
	while(4!=now->data){
		now = now->next;   
	}
	node = new NODE;
	node->data = 100;
	node->next =now->next;
	now ->next =node;
	p = head;
	while (p !=NULL){
		cout << p->data ;
		p=p->next; 	}
}	