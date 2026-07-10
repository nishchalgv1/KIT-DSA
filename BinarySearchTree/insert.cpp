// leetcode 701

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            TreeNode* newNode = new TreeNode(val);
            return newNode;
        }

        // compare val with root -> data
        if(val < root -> val){
            root -> left = insertIntoBST(root -> left, val);
        }else{
            root -> right = insertIntoBST(root -> right, val);
        }
        return root;
    }
};