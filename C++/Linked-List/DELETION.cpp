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

void insert(node* &head, int val){
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void delete_head(node* &head){
    node* temp = head;
    head = head->next;
    free(temp);
}

void delete_end(node* head){
    node* second_last = head;
    while(second_last->next->next!=NULL){
        second_last= second_last->next;
    }
    node* last = second_last->next;
    second_last->next = NULL;
    delete last;

}

void delete_value(node* head, int val){
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp->next=temp->next->next;
    delete toDelete;
}

void delete_position(node* &head,int pos){
    node* temp = head;
    pos = pos-1;
    while(--pos){
        temp= temp->next;
    }
    node* todelete=temp->next;
    temp->next = temp->next->next;
    delete todelete;
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
    node* head=NULL;
    insert(head,20);
    insert(head,18);
    insert(head,16);
    insert(head,14);
    insert(head,12);
    insert(head,13);
    insert(head,10);
    insert(head,8);
    insert(head,6);
    insert(head,4);
    insert(head,2);
    insert(head,0);    
    display(head);

    delete_head(head);
    display(head);

    delete_end(head);
    display(head);

    delete_value(head,6);
    display(head);

    delete_position(head,5);
    display(head);




    return 0;
}