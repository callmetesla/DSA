#include<iostream>
#include<stdlib.h>
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
        cout<<"NAHH";
        }
        else{
        temp->next=t->next;
        t->next=temp;
        }
}
void append(node** head,int data){
        node* temp= new node;
        node* t=new node;
        t=*head;
        if(*head==NULL){
                *head=temp;
        }
        while(t->next!=NULL)
                t=t->next;
        temp->data=data;
        temp->next=NULL;
        t->next=temp;
}

void deleteKey(node** head,int key)
{
        node* t=new node;
        t=*head;
        node* prev=NULL;
        while(*head!=NULL && t->data==key)
        {
                *head=t->next;
                free(t);
                return;
        }
        while(t->next!=NULL&&t->data!=key){     
            prev=t;
            t=t->next;
        }
        prev->next=t->next;
        free(t);


}
void deletePos(node** head,int pos)
{
        node* t=new node;
        t=*head;
        node* prev;
        if(pos==0)
        {
        *head=t->next;
        free(t);
        return;
        }
        for(int i=0;t!=NULL&&i<pos-1;i++)
            t=t->next;
        node* tp;
        tp=t->next->next;
        free(t->next);
        t->next=tp;
}
void printlist(node* head){
        while(head!=NULL){
                cout<<head->data<<"->";
                head=head->next;
        }
        cout<<"NULL";
        cout<<endl;
}
int count(node* head){
    if(head==NULL)
        return 0;
    else
        return 1+count(head->next);
}
int main(){
        node* head=NULL;
        push(&head,1);
        push(&head,2);
        
        insertAfter(&head,3,2);

        append(&head,5);
        printlist(head);
         
        deleteKey(&head,5);
        printlist(head);

        deletePos(&head,1);
        printlist(head);
        
        cout<<count(head);
        return 0;
}
