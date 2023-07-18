#include<iostream>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void Push(int number){
    if(top == MAX_SIZE - 1){
        std::cout<<"Error: Stack Overflow.\n";
        return;
    }
    A[++top] = number;
}

void Pop(){
    if(top == -1){
        std::cout<<"Error: Nothing to pop.\n";
        return;
    }
    top--;
}

int Top(){
    return A[top];
}

void IsEmpty(){
    if(top == -1){
    std::cout<<"Stack is empty\n";
    return;
    }
    
    std::cout<<"Stack is not empty\n";
}

void Print(){
    for(int i=0;i<=top;i++){
        std::cout<<A[i]<<" ";
    }
    std::cout<<"\n";
}
int main(){
    Push(1);
    Push(2);
    Pop();
    Push(3);
    Push(4);
    Pop();
    Push(5);
    Push(6);
    Pop();
    Push(7);
    Print();

    std::cout<<"Top is:";
    std::cout<<Top()<<"\n";

    IsEmpty();

    return 0;
}