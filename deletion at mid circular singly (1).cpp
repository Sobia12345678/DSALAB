#include<iostream>
using namespace std;
int main(){
struct node{
int data;
node *next;
};
node *n1=new node();
node *n2=new node();
node *n3=new node();
node *n4=new node();
n1->data=10;
n2->data=20;
n3->data=30;
n4->data=40;
n1->next=n2;
n2->next=n3;
n3->next=n4;
n4->next=n1;
node *head=n1;
cout<<"circular list is:"<<endl;
node *k;
k=head;
do{
cout<<k->data<<endl;
k=k->next;
}
while(k!=head);
cout<<endl;

node *pre;
int del;
cout<<" * which value u want to delete*** "<<endl;
cin>>del;
node *ptr;
ptr=head;
while(ptr->data!=del){
pre=ptr;
ptr=ptr->next;
}
pre->next=ptr->next;
delete(ptr);
node *j;
j=head;
cout<<" *after deletion*: "<<endl;
do{
cout<<j->data<<endl;
j=j->next;
}
while(j!=head);
cout<<endl;


return 0;
}