#include<iostream>
using namespace std;
struct node{
        int data;
        node* next;
};
void push(node** head,int data){
        node* temp=new node;
        temp->data=data;
        temp->next=*head;
        *head=temp;
        
}
void append(node** head,int data){
        node* temp=new node;
        temp->data=data;
        temp->next=NULL;
        node* t=new node;
        t=*head;
        while(t->next!=NULL){
                t=t->next;
        }
        t->next=temp;
}
void insertAfter(node** head,int data,int key){
        node* t=new node;
        node* temp=new node;
        temp->data=data;
        t=*head;
        while(t->next!=NULL){
           
        if(t->data==key)
            break;
        t=t->next;
        }
        if(t->next==NULL){
        cout<<"Nah"<<endl;}
        else{
        temp->next=t->next;
        t->next=temp;
}}
void printlist(node* head){
    while(head!=NULL)
        {cout<<head->data<<endl;
            head=head->next;
        }
}
int main(){
        node* head=NULL;
        push(&head,10);
        push(&head,22);
        append(&head,33);
        insertAfter(&head,3,32);
        printlist(head);
        return 0;
}
