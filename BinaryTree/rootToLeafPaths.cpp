// gfg
class Solution {
    void getAllPaths(Node* root, vector<int>& path, vector<vector<int>>& finalOutput){
        if(root == NULL) return;
        
        // store the curr node in the path
        path.push_back(root -> data);
        
        // check if leaf node
        if(root -> left == NULL && root -> right == NULL){
            finalOutput.push_back(path);
        }
        
        getAllPaths(root -> left, path, finalOutput);
        getAllPaths(root -> right, path, finalOutput);
        
        path.pop_back();
    }
    
  public:
    vector<vector<int>> Paths(Node* root) {
        // create a final Output
        vector<vector<int>> finalOutput;
        vector<int> path;
        
        getAllPaths(root, path, finalOutput);
        
        return finalOutput;
        
    }
};