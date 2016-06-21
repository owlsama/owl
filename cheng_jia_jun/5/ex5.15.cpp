/*用链表实现对键盘输入的数进行排序，结束标记-1*/
/*输入各个数，建立链表，链表排序，输出链表各个结点的值以及撤销链表*/
struct Node
{
	int content;
	Node *next;
};

extern Node *input();
extern void sort(Node *h);
extern void output(Node *h);
extern void remove(Node *h);

int main()
{
	Node *head;
	head= input();
	sort(head);
	output(head);
	remove(head);
	return 0;
}
#include<iostream>
using namespace std;
Node *input() //从表尾插入数据 
{
	Node *head=NULL,*tail;
	int x;
	cin >> x;
	while(x!=-1)
	{
		Node *p=new Node;
		p->content=x;
		p->next=NULL;
		if (head==NULL)
		head=p;
		else 
		tail->next=p;
		tail =p;
		cin>>x;
	}
	return head;
}

void sort(Node *h) //采用选择排序
{
	if(h==NULL||h->next==NULL)
	return;
	for(Node *p1=h; p1->next!=NULL; p1=p1->next)
	{
		Node *p_min=p1;
		for(Node *p2=p1->next;p2!=NULL;p2=p2->next)
		if(p2->content < p_min->content) p_min=p2;
		if(p_min!=p1)
		{
			int temp=p1->content;
			p1->content=p_min->content;
			p_min->content=temp;
		}
	}
}

void output(Node *h)
{
	for(Node *p=h;p!=NULL;p=p->next)
	cout<<p->content<<',';
	cout<<endl;
}

void remove(Node *h)
{
	while(h!=NULL)
	{
		Node *p=h;
		h=h->next;
		delete p;
	}
}
