#include "BinaryTreeNode.h"
#include <iostream>
using namespace std;

BinaryTreeNode* takeInput(){
    int rootData;
    cout << "Enter root's data: " << endl;
    cin >> rootData;

    // -1 as the terminator
    if(rootData == -1) return NULL;

    // create a root node
    BinaryTreeNode* root = new BinaryTreeNode(rootData);

    BinaryTreeNode* leftChild = takeInput();
    BinaryTreeNode* rightChild = takeInput();

    // attach root -> left = leftchild and rightchild in right of root
    root -> left = leftChild;
    root -> right = rightChild;

    return root;
}

void printBinaryTree(BinaryTreeNode* root){
    if(root == NULL) return;

    cout << root -> data << endl;

    printBinaryTree(root -> left);
    printBinaryTree(root -> right);

}

int main(){

    BinaryTreeNode* root = takeInput();  // -- root of the binary Tree after taking complete binary tree input

    printBinaryTree(root);
}