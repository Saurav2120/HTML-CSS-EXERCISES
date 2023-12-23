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

void Insertion_At_End(node* &head,int val){
    node* new_node = new node(val);

    if(head==NULL){
        head = new_node;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;

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
    Insertion_At_End(head,12);
    Insertion_At_End(head,10);
    Insertion_At_End(head,8);
    Insertion_At_End(head,6);
    Insertion_At_End(head,4);
    Insertion_At_End(head,2);
    Insertion_At_End(head,0);
    display(head);

    return 0;
}