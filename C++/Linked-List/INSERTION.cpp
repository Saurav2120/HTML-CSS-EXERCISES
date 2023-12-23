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

void insert_head(node* &head,int val){
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void insert_pos(node* head, int val, int pos){
    node* new_node = new node(val);
    node* temp = head;
    //pos = pos+1;
    if(pos==0){
        insert_head(head,val);
        return;
    }
    while(--pos){
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void insert_update(node* &head, int val, int k){
    node* temp = head;
    //k = k+1;
    while(--k){
        temp = temp->next;
    }
    temp->data = val;
}

void insert_end(node* &head,int val){
    node* new_node = new node(val);
    node* temp = head;
    if(head==NULL){
        head = new_node;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next =new_node;
}

void display(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insert_head(head,6);
    insert_head(head,4);
    insert_head(head,2);
    insert_head(head,0);
    display(head);
    insert_end(head,10);
    insert_end(head,12);
    insert_end(head,15);
    display(head);
    insert_pos(head,8,4);
    insert_pos(head,14,7);
    display(head);
    insert_update(head,16,9);
    display(head);

    return 0;


}