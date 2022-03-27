//Deleting a node at nth position
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};

Node *head;

void Insert(int x){
    Node *temp = new Node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    Node *temp2 = head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp;
}

void Delete(int del){
    Node *temp = head;
    if(del==1){
        head=temp->next;
        delete(temp);
        return;
    }
    for(int i=0;i<del-2;i++){
        temp=temp->next;
    }
    Node *temp2 = temp->next;
    temp->next=temp2->next;
    delete(temp2);
}

void Print(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

int main(){
    head=NULL;
    int n,x;
    cout<<"How many elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the number: ";
        cin>>x;
        Insert(x);
        Print();
    }
    int del;
    cout<<"Enter the  position of the number to be deleted: ";
    cin>>del;
    Delete(del);
    Print();
    return 0;
}