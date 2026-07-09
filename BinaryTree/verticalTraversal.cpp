

class Solution {
    void solve(Node* root, vector<vector<int>>& output){
        if(root == NULL) return;
        
        queue<pair<Node*, int>> pendingNodes;
        pendingNodes.push({root, 0});
        
        map<int, vector<int>> myMap;
        
        while(!pendingNodes.empty()){
            //front
            pair<Node*, int> front = pendingNodes.front();
            pendingNodes.pop();
            
            Node* node = front.first;
            int hd = front.second;
            
            myMap[hd].push_back(node -> data);
            
            if(node -> left != NULL){
                pendingNodes.push({node -> left, hd - 1});
            }
            
            if(node -> right != NULL){
                pendingNodes.push({node -> right, hd + 1});
            }
        }
        for(auto it: myMap){
            output.push_back(it.second);
        }
    }
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        vector<vector<int>> output;
        
        solve(root, output);
        
        return output;
        
    }
};