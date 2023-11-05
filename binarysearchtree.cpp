#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    
        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

node* insertion(node* root, int data){
    if(root==NULL){
        return new node(data);
    }

    if(root->data > data){
        root->left = insertion(root->left, data);
    }else if(root->data < data){
        root->right = insertion(root->right, data);
    }

    return root;
}

node* buildtree(){
    node* root = NULL;
    int data;

    while(true){
        cout<<"Enter the data or (-1) to stop: ";
        cin>>data;

        if(data == -1){
            break;
        }

        root = insertion(root, data);
    }

    return root;
}

void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    node* root = NULL;
    root = buildtree();

    cout<<"The inorder traversal is: "<<endl;
    inorder(root);
}