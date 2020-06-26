#include<iostream>

using namespace std;

struct node{
	int data;
	node* link;
};

node *head=NULL;
void print()
{
	node *temp = head;
	cout<<"List is : ";
	
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->link;
	}
	cout<<endl;
}

void insert(int x)
{
	node *temp = new node();
	temp->data = x;
	temp->link = NULL;
	
	if(head!=NULL)
		temp->link=head;
	
	head = temp;
}

int main()
{
	cout<<endl<<endl<<"\t\t\t\t\t"<<"INSERTION AT THE BEGNING"<<endl<<endl;
	int n,x;
	cout<<"Enter the size of the list:- ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the number - ";
		cin>>x;
		
		insert(x);
		print();
	}
	
	return 0;
}


