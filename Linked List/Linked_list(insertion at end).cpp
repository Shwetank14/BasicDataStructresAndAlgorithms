#include<iostream>

using namespace std;

struct node{
	int data;
	node *next;
};

node *head=NULL;

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
		temp1 = temp1->next;
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

int main()
{
	cout<<endl<<endl<<"\t\t\t\t\t"<<"INSERTION AT THE END"<<endl<<endl;
	int n,x;
	cout<<"Enter the list size - ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"Enter the data - ";
		cin>>x;
		insert(x);
		display();
	}
}

