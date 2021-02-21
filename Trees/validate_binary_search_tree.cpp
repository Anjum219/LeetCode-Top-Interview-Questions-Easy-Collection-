#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool validity( TreeNode* root, int min, int max ){
    if( min <= root->val && root->val <= max ){
        bool lv = true;
        bool rv = true;

        if( root->left != nullptr ){
            if( min == root->val )
                lv = false;
            else
                lv = validity( root->left, min, root->val-1 );
        }

        if( root->right != nullptr ){
            if( root->val == max )
                rv = false;
            else
                rv = validity( root->right, root->val+1, max);
        }

        return lv && rv;
    }
    else{
        return false;
    }
}

bool isValidBST(TreeNode* root) {
    return validity( root, INT_MIN, INT_MAX );
}

int main(){
    TreeNode * root = new TreeNode(10);
    TreeNode * node1 = new TreeNode(5);
    TreeNode * node2 = new TreeNode(2);
    TreeNode * node3 = new TreeNode(1);
    TreeNode * node4 = new TreeNode(3);
    TreeNode * node5 = new TreeNode(7);
    TreeNode * node6 = new TreeNode(15);
    TreeNode * node7 = new TreeNode(12);
    TreeNode * node8 = new TreeNode(17);

    root->left = node1;
    root->right = node6;
    node1->left = node2;
    node1->right = node5;
    node2->left = node3;
    node2->right = node4;
    node6->left = node7;
    node6->right = node8;

    cout<<isValidBST(root)<<endl;

    return 0;
}
