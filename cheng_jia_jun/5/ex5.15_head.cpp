//陈家俊书上例子5.15 
struct Node
{
	int content;
	Node *next;
};

extern Node *input();
extern void sort(Node *h);
extern void output(Node *h);
extern void remove(Node *h);

#include<iostream>
using namespace std;
int main()
{
	Node *head;
	head=input();
	sort(head);
	output(head);
	remove(head);
	return 0;
}

Node *input() //表头插入节点 
{
	int x;
	cin>>x;
	Node *head,*tail;
	head=NULL;
	while(x!=-1)
	{
		Node *p=new Node;
		p->content=x;
		p->next=NULL;
		if(head==NULL)
		head=p;
		else
		tail->next=p;
		tail=p;
		cin>>x;
	}
	return head;
}

void sort(Node *h) //选择排序 
{
	for(Node *q=h;q!=NULL;q=q->next)
	{
		Node *p_min=q;
		for(Node *p=q;p!=NULL;p=p->next)
		{
		if(p->content<p_min->content)
			p_min=p;
		}
		if(p_min!=q)
		{
			int temp=q->content;
			q->content=p_min->content;
			p_min->content=temp;
		}
	}
}

void output(Node *h)
{
	for(Node *p=h;p!=NULL;p=p->next)
	{
		cout<<p->content<<" ";
	}
	cout<<endl;
}

void remove(Node *h)
{
	Node *head=h;
	while(head!=NULL)
	{
		Node *p=head;
		head=head->next;
		delete p;
	}
}
