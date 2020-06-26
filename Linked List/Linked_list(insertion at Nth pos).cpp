#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	node *next;
};
node *head = NULL;

void insert(int x)
{
	node *temp = new node();
	temp->data = x;
	temp->next = NULL;
	
	if(head == NULL)
	{
		head = temp;
		return ;
	}
	
	node *temp1 = head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next = temp;
}
void display()
{
	node *temp = head;
	cout<<"List is : ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

void create(int n)
{
	int x;
	
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<"Enter the data - ";
		 	cin>>x;	
		}
		else
		{
			cout<<"Enter the next data - ";
			cin>>x;
		}
		insert(x);
	}
	display();
}

void Ninsert(int n, int x)
{
	node *temp = new node();
	temp->data = n;
	temp->next = NULL;
	
	if(x == 1)
	{
		temp->next = head;
		head = temp;
		return;
	}
	node *temp1 = head;
	for(int i=0;i<x-2;i++)
	{
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;
}
int main()
{
	int n;
	cout<<"Enter the size of the list - ";
	cin>>n;
	create(n);
	int pos,ele;
	cout<<endl<<"Enter the position at which the new element is to be inserted - ";
	cin>>pos;
	if(pos>n || pos<=0)
	{	
		do{
			cout<<"Enter a valid position - ";
			cin>>pos;
		}while(pos>n || pos<=0);
		
	}
	cout<<"Enter the element - ";
	cin>>ele;
	
	Ninsert(ele,pos);
	cout<<endl<<"The final ";
	display();
	
}
