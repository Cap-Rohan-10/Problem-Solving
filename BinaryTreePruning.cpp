class Solution {
public:
    
    bool checkSubtree(TreeNode* root){
        
        if(root == NULL)
            return true;
        
        if(root->val == 1)
            return false;
        
        if(!checkSubtree(root->left))
            return false;
        
        if(!checkSubtree(root->right))
            return false;
        
        return true;
        
    }
    
    void removeOnes(TreeNode* root){
        
        if(root == NULL)
            return ;
        
        removeOnes(root->left);
        removeOnes(root->right);
        
        bool leftSubtree = checkSubtree(root->left) ;
        bool rightSubtree = checkSubtree(root->right) ;
        
        if(leftSubtree == true){
            TreeNode* temp = root->left;
            root->left = NULL;
            delete temp ;
        }
        
        if(rightSubtree == true){
            TreeNode* temp = root->right;
            root->right = NULL;
            delete temp ;
        }
        
        return ;
        
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        
        removeOnes(root);
        
        if(root->left == NULL && root->right == NULL && root->val != 1){
            
            TreeNode* temp = root ;
            root = NULL ;
            
        }
        
        return root;
        
    }
};
