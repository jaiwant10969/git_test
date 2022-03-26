/* Inserting a node at the beginning of a linked list*/

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
    temp->next=head;
    head = temp;
}
void Print(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<"\n";
}
int main(){
    head=NULL; 
    int n,x;
    cout<<"How many numers?";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the number: ";
        cin>>x;
        Insert(x);
        Print();
    }
    return 0;
}