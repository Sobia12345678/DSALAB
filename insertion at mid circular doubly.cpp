#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
	Node*prev;
	
};
Node*head=NULL;
void insert(int n){
	Node *newnode=new Node;
	newnode->data=n;
	if(head==NULL){
		head=newnode;
		newnode->next=head;
		newnode->prev=head;
	}
	else {
		Node *last=head->prev;
		newnode->next=head;
		newnode->prev=last;
		last->next=newnode;
		head->prev=newnode;
		head=newnode;
	}
}

void insertAtMid(int p, int n){
	Node *newnode=new Node;
	newnode->data=n;
 if(head==NULL){
 	head=newnode;
 	newnode->next=head;
 	newnode->prev=head;
 } else{
 	Node *temp=head;
 	for(int i=1;i<p-1;i++){
 		temp=temp->next;
	 }
	 newnode->next=temp->next;
	 newnode->prev=temp;
	 temp->next->prev=newnode;
	 temp->next=newnode;
 }
}
void display(){
	
	Node *temp=head;
	do{
		cout<<temp->data<<"<-> ";
		temp=temp->next;
	}
			while(temp!=head);
		      cout<<"head"<<endl;
	
	
}
int main(){
	cout<<"original list"<<endl;
    insert(2);
	insert(3);
	insert(4);
	insert(5);
	display();
	
	cout<<"after insertion at mid"<<endl;
	insertAtMid(1,12);
	display();
	return 0;
}