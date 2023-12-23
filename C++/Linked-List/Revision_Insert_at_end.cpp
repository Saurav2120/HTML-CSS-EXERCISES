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

void Insert_at_Head(node* &head,int val){
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void Insert_End(node* &head,int val){
    node* new_node = new node(val);
    if(head == NULL){
        head = new_node;
        return;
    }
    node *temp = head;
    while(temp->next!=NULL){
        
        temp= temp->next;
    }
    temp->next = new_node;
}

void Insert_at_Position(node* &head,int val,int pos){
    node* new_node = new node(val);
    if(pos==0){
        Insert_at_Head(head,val);
        return;
    }
    node* temp= head;
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
    Insert_End(head,2);
    Insert_End(head,4);
    Insert_End(head,6);
    Insert_End(head,8);
    Insert_End(head,10);
    display(head);
    Insert_at_Position(head,5,0);
    display(head);

    return 0;

}