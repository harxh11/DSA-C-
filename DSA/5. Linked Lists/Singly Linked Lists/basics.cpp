#include<bits/stdc++.h>
using namespace std;

class node{
    public: 
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};


void printList(node* &head){
    node* temp = head;
    
    while(temp != NULL) {
        cout<<temp->data<<" -> ";
        temp = temp -> next;
        
    }
    cout<<"NULL"<<endl;
}

void insertAtTail(node* head, int new_data){
    
    node* new_node = new node(new_data);
    
    if (head == NULL){
        head = new_node;
    }
    
    // node* new_node = new node(new_data);
    node* temp = head;
    
    while (temp -> next != NULL){
        temp = temp -> next;
    }
    
    temp -> next = new_node;
    
}

void insertAtHead(node* &head, int new_data) {
    node *new_node = new node(new_data);
    new_node -> next = head;
    
    head = new_node;
}


void insertInBetween(node* &head, int new_data, int target){
    node* new_node = new node(new_data);
    node* temp = head;
    
    while (temp -> data != target) {
        temp = temp -> next;
    }
    
    new_node -> next = temp -> next;
    temp -> next = new_node;
}

int main() {
    
    node* head = new node(1);
    
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    
    insertAtHead(head, 5);
    
    insertInBetween(head, 7, 3);            //Insert after 3...
    printList(head);
    
    return 0;
}