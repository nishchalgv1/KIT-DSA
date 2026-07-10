class Solution {
  public:
    vector<int> rightView(Node *root) {
        vector<int> output;
        if(root == NULL){
            return output;
        }
        
        queue<Node*> pendingNodes;
        
        pendingNodes.push(root);
        
        while(!pendingNodes.empty()){
            int size = pendingNodes.size();
            
            for(int i = 0; i < size; i++){
                Node* front = pendingNodes.front();
                pendingNodes.pop();
                
                if(i == size - 1){
                    output.push_back(front -> data);
                }
                
                if(front -> left != NULL){
                    pendingNodes.push(front -> left);
                }
                
                if(front -> right != NULL){
                    pendingNodes.push(front -> right);
                }
            }
        }
        return output;
        
    }
};