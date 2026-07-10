// leetcode 450

class Solution {
    TreeNode* findMinNode(TreeNode* root){
        if(root == NULL) return NULL;

        while(root -> left != NULL){
            root = root -> left;
        }
        return root;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){
            return NULL;
        }

        if(key < root -> val){
            root -> left = deleteNode(root -> left, key);
        }else if(key > root -> val){
            root -> right = deleteNode(root -> right, key);
        }else{
            // case1: root is leaf node
            if(root -> left == NULL && root -> right == NULL){
                delete root;
                return NULL;
            }else if(root -> left != NULL && root -> right == NULL){
                TreeNode* temp = root -> left;
                delete root;
                return temp;
            }else if(root -> right != NULL && root -> left == NULL){
                TreeNode* temp = root -> right;
                delete root;
                return temp;
            }else{
                // find the min of right side
                TreeNode* minNode = findMinNode(root -> right);
                root -> val = minNode -> val;
                root -> right = deleteNode(root -> right, minNode -> val);
            }
        }
        return root;
    }
};