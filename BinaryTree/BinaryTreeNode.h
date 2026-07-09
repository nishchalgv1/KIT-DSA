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