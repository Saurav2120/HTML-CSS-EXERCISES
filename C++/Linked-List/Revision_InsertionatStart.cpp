#include<iostream>
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

void InsertAtStart(node* &head,int val){
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    node* head = NULL;
    InsertAtStart(head,8);
    InsertAtStart(head,6);
    InsertAtStart(head,4);
    InsertAtStart(head,2);
    display(head);
    return 0;
}