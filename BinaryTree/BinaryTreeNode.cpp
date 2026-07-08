#include <iostream>
using namespace std;

class BinaryTreeNode{
    public:
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int val){
        this -> data = val;
        left = nullptr;
        right = nullptr;
    }
};

void print(BinaryTreeNode* root){
    if(root == NULL) return;

    // print root's data
    cout << "root's -> data: " << root -> data << endl;

    if(root -> left){
        cout << "root's left: " <<  root -> left -> data << endl;
    }

    if(root -> right){
        cout << "root's right: " << root -> right -> data << endl;
    }
}

int main(){
    // create the root node
    BinaryTreeNode* root = new BinaryTreeNode(10);

    BinaryTreeNode* leftChild = new BinaryTreeNode(20);
    BinaryTreeNode* rightChild = new BinaryTreeNode(30);

    root -> left = leftChild;
    root -> right = rightChild;

    // print root, left and right
    print(root);
}