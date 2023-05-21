/* Coded by trinayreddy malireddy*/
/* problem statement: https://practice.geeksforgeeks.org/problems/check-for-bst/1?page=1&sortBy=submissions */
class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    vector<int>a;
    void inorder(Node *root)
    {
        if(root->left)
        inorder(root->left);
        a.push_back(root->data);
        if(root->right)
        inorder(root->right);
        
    }
    bool isBST(Node* root) 
    {
        // Your code here
        inorder(root);
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]>=a[i+1])
            return false;
        }
        return true;
    }
};

