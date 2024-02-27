#include <bits/stdc++.h>
using namespace std;

class StackNode{
    public:
        int val;
        StackNode* next;
    
    StackNode(int v){
        val = v;
    }
};


class Stack{
    public:
        int size = 0;
        StackNode* top = NULL;
        int maxSize;

    Stack(int s){
        maxSize = s;
    }
    
    void push(int value){
        
        StackNode* n = new StackNode(value);
        if(!top){
            top = n;
            size++;
        }
        else {
            if(size >= maxSize){
                cout<<"Stack overflow"<<endl;
                return;
            }
            else {
                n -> next = top;
                top = n;
                size++;
            }
        }
        cout<<value<<" pushed into stack!"<<endl;
        
    }
    
    void pop(){
        if(size == 0){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else {
            StackNode* temp = top; 
            top = top -> next;
            delete temp;
            size--;
        }
    }
    
    void peek(){
        if(!top){
            cout<<"Stack is Empty!"<<endl;
        } else {
            cout<<top -> val<<endl;
        }
    }
    
    void display(){
        StackNode* itr = top;
        while(itr){
            cout<<itr -> val<<" -> ";
            itr = itr -> next;
        }
        cout<<"NULL";
    }
};



int main(){
    Stack s(5);
    StackNode* node1 = new StackNode(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    s.peek();
    s.push(100);
    s.display();
    return 0;
}