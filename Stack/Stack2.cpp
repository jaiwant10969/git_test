#include<iostream>

struct Node{
    int data;
    Node *next;
};

void Push(Node **top, int number){
    Node *temp = new Node();
    temp->data = number;
    temp->next = *top;
    *top = temp;
}

void Pop(Node **top){
    Node *temp;
    if(*top == NULL) return;
    temp = *top;
    *top = temp->next;
    delete(temp);
}

void Print(Node *head){
    while(head!=NULL){
        std::cout<<head->data<<" ";
        head=head->next;
    }
    std::cout<<"\n";
}

void Top(Node *top){
    std::cout<<top->data<<"\n";
}

void IsEmpty(Node *top){
    if(top == NULL){
        std::cout<<"Stack is empty";
    }
    else{
        std::cout<<"The Stack is not empty";
    }
    std::cout<<"\n";
}

int main(){
    Node *top = NULL;
    Push(&top,1);
    Push(&top,2);
    Pop(&top);
    Push(&top,3);
    Push(&top,4);
    Pop(&top);
    Push(&top,5);
    Print(top);
    std::cout<<"The top element is: ";
    Top(top);
    IsEmpty(top);
    return 0;
}