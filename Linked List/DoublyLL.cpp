#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;
};
Node *head = NULL;

void insert(Node *temp){
    static Node *last;
    if(head == NULL){
        head = temp;
        last = temp;
        return;
    }
    temp->next = last->next;
    last->next = temp;
    temp->prev = last; 
    last = temp;
}

void create(int x){
    Node *temp = new Node();
    temp->data = x;
    temp->next = temp->prev = NULL;

    insert(temp);
}

void display(){
    Node *t = head;
    while(t!=NULL){
        cout<<t->data<<" ";
        t = t->next;
    }
    /*while(t!=NULL){
        cout<<t->data<<" ";
        t = t->prev;
    }*/
}

void Insrt(int pos,int dat){
    Node *NEWW = new Node();NEWW->data = dat;
    NEWW->next = NEWW->prev = NULL;
    Node *temp = head;
    if(pos == 1){
        NEWW->next = head;
        head->next->prev = NEWW;
        head = NEWW;
        return;
    }

    for(int i=0;i<pos-2;i++){
        temp = temp->next;
    } 
    NEWW->next = temp->next;
    temp->next->prev = NEWW;
    temp->next = NEWW;
    NEWW->prev = temp;
}

int main(){
    int n,x;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        create(x);
    }

    
    int pos,dat;
    cout<<"Enter the pos for insertion : ";cin>>pos;
    cout<<"Enter the data : ";cin>>dat;

    Insrt(pos,dat);
    display();

}