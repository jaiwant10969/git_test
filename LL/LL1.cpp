//Inserting a node at the begining of linked list


#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

void Insert(Node **head,int element){
    Node *temp=new Node();
    temp->data=element;
    temp->next=*head;
    *head=temp;
}

void Print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    Node *head=NULL;                    //head is set as local variable
    int No_of_elements;
    cout<<"Enter the number of elements: ";
    cin>>No_of_elements;
    for(int i=0;i<No_of_elements;i++){
        int element;
        cout<<"Enter the element: ";
        cin>>element;
        Insert(&head,element);
    }
    Print(head);
    return 0;
}