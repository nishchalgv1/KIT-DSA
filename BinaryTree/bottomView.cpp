
class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int> output;
        if(root == NULL) return output;
        
        queue<pair<Node*, int>> pendingNodes;
        pendingNodes.push({root, 0});
        
        map<int, int> myMap;
        
        while(!pendingNodes.empty()){
            pair<Node*, int> front = pendingNodes.front();
            pendingNodes.pop();
            
            Node* node = front.first;
            int hd = front.second;
            
            myMap[hd] = node -> data;
            
            if(node -> left != NULL){
                pendingNodes.push({node -> left, hd - 1});
            }
            
            if(node -> right != NULL){
                pendingNodes.push({node -> right, hd + 1});
            }
        }
        
        // insert all values from map into output
        for(auto it: myMap){
            output.push_back(it.second);
        }
        return output;
        
        
    }
};