// leetcode 108


class Solution {
    TreeNode* convertToBST(vector<int>& nums, int start, int end){
        if(start > end) return NULL;

        int mid = start + (end - start) / 2;

        TreeNode* root = new TreeNode(nums[mid]);

        root -> left = convertToBST(nums, start, mid - 1);
        root -> right = convertToBST(nums, mid + 1, end);

        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();

        TreeNode* root =  convertToBST(nums, 0, n - 1);
        return root;
    }
};