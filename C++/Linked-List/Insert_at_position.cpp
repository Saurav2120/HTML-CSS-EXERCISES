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

void insertHead(node* &head, int val){
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void Insert_Position(node* &head, int val, int pos){
    if(pos==0){
        insertHead(head,val);
        return;
    }
    node* new_node = new node(val);
    node* temp = head;
    while(--pos){
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insertHead(head,6);
    insertHead(head,5);
    insertHead(head,3);
    insertHead(head,2);
    insertHead(head,1);
    insertHead(head,0);
    display(head);
    Insert_Position(head,4,4);
    display(head);
    //OUTPUT:
    //0->1->2->3->5->6->NULL
    //0->1->2->3->4->5->6->NULL
    return 0;
}
