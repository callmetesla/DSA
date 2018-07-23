#include<iostream>
#include<queue>
using namespace std;
struct node{
        int data;
        node* left,*right;
        node(int data){
        this->data=data;
        left=right=NULL;
        }
};
int height(node* nd);
void printlevel(node*,int);
void printlevelorder(node* root){

    int l=height(root);
    for(int i=1;i<=l;i++){
        printlevel(root,i);
    }
}
void printlevelorderqueue(node* root){

    if(root==NULL)
        return;
    queue <node *> q;
    q.push(root);
    while(q.empty()==0){
    
        node* nd=q.front();
        cout<<nd->data<<"  ";
        q.pop();
        if(nd->left!=NULL)
            q.push(nd->left);
        if(nd->right!=NULL)
            q.push(nd->right);
    
    }

}
void printlevel(node* root,int level){

    if(root==NULL)
        return;
    if(level==1)
        cout<<root->data<<"  ";
    else if(level>1){
    
        printlevel(root->left,level-1);
        printlevel(root->right,level-1);
    }
}


void printInorder(node* Node){
        if(Node==NULL)
            return;
        printInorder(Node->left);
        cout<<Node->data<< "  ";
        printInorder(Node->right);
        
}
int height(node* nd){
        if(nd==NULL)
            return 0;
        else
        {
            int l=height(nd->left);
            int r=height(nd->right);
            if(l>r)
                return l+1;
            else
                return r+1;     
        

        }

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
    printlevelorderqueue(root);
    return 0;
}
