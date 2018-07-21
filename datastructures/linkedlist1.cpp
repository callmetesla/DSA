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
void printl(node* head){
        while(head!=NULL){
            cout<<head->data<<endl;
            head=head->next;
        
        }

}
int main(){
        node* head=NULL;
        push(&head,10);
        push(&head,11);
        printl(head);

        return 0;

}
