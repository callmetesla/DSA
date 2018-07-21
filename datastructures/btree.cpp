#include<iostream>
using namespace std;
struct node{
        int data;
        node* left,*right;
        node(int data){
        this->data=data;
        left=right=NULL;
        }
};
void printInorder(node* Node){
        if(Node==NULL)
            return;
        printInorder(Node->left);
        cout<<Node->data<< "  ";
        printInorder(Node->right);
        
}
void printPreorder(node* nd){
    if(nd==NULL)
        return;
    cout<<nd->data<<"  ";
    printPreorder(nd->left);
    printPreorder(nd->right);

}
void postOrder(node* nd){
        if(nd==NULL)
            return;
        postOrder(nd->left);
        postOrder(nd->right);
        cout<<nd->data<<"  ";

}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
   postOrder(root);
    return 0;

}
