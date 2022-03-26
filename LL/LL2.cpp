//Inserting a node at nth position in Linked List.

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

//declaring head as global variable
Node *head;

//function to Insert the node
void Insert(int number, int position){
    Node *temp = new Node();
    temp->data=number;
    temp->next=NULL;
    if(position==1 || head==NULL){   //If position is 1 or head = NULL, then insert the node at the beginning.
        temp->next=head;
        head=temp;
        return;
    }
    Node *temp2 = head;
    for(int i=0;i<position-2;i++){
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
}
//function to print LL
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
    int n,number,position;
    cout<<"How many numbers?";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the number and position: \n";
        cout<<"Number->";
        cin>>number;
        cout<<"Position->";
        cin>>position;
        Insert(number, position);
        Print();
    }
    return 0;
}