#include "BinaryTreeNode.h"
#include <iostream>
#include <queue>
using namespace std;

BinaryTreeNode* takeInputLevelWise(){
    int rootData;
    cout << "Enter root data: " << endl;
    cin >> rootData;

    if(rootData == -1) return NULL;

    // create the root node
    BinaryTreeNode* root = new BinaryTreeNode(rootData);

    queue<BinaryTreeNode*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()){
        BinaryTreeNode* front = pendingNodes.front();
        pendingNodes.pop();

        int leftChildData;
        cout << "Enter left child of " << front -> data << endl;
        cin >> leftChildData;

        if(leftChildData != -1){
            BinaryTreeNode* leftChild = new BinaryTreeNode(leftChildData);
            front -> left = leftChild;
            pendingNodes.push(leftChild);
        }

        int rightChildData;
        cout << "Enter right child of " << front -> data << endl;
        cin >> rightChildData;

        if(rightChildData != -1){
            BinaryTreeNode* rightChild = new BinaryTreeNode(rightChildData);
            front -> right = rightChild;
            pendingNodes.push(rightChild);
        }
    }
    return root;
}

void printLevelWise(BinaryTreeNode* root){
    if(root == NULL) return;

    queue<BinaryTreeNode*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        BinaryTreeNode* front = pendingNodes.front();
        pendingNodes.pop();

        cout << front -> data << " ";

        if(front -> left != NULL){
            pendingNodes.push(front -> left);
        }
        if(front -> right != NULL){
            pendingNodes.push(front -> right);
        }
    }
}

int main(){
    BinaryTreeNode* root = takeInputLevelWise();

    printLevelWise(root);
}