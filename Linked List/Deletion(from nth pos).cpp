#include<iostream>


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
		return;
	}
	node *temp1 = head;
	while(temp1->next!=NULL)
	{
		temp1 = temp1->next;
	}
	temp1->next = temp;
	
}
void display()
{
	node *temp = head;
	cout<<"The list : ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
void Delete(int pos)		// REVISE THIS LOGIC		// FULL CODE NOT CHECKED x x x x???
{	
	node *temp1 = head; 
	if(pos == 1)
	{
		head = temp1->next;
		delete temp1;
		return;
	}
	
	for(int i=0;i<pos-2;i++)
	{
		temp1 = temp1->next;
	}
	node *temp2 = temp1->next;
	temp1->next = temp2->next;
	delete temp2;
}
int main()
{
	int n,x;
	cout<<"Enter the size - ";
	cin>>n;
	
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
	int pos;
	cout<<"Enter the position from which the element is to be deleted - ";
	cin>>pos;
	
	Delete(pos);
	cout<<"The final ";
	display();
}
