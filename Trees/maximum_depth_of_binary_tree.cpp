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

void print_level_order( TreeNode * root ){
    queue <TreeNode *> bag;

    if( root == nullptr )
        return;

    bag.push(root);

    while( !bag.empty() ){
        int k = bag.size();

        while( k-- ){
            TreeNode * node = bag.front();
            bag.pop();
            cout<<node->val<<' ';

            if( node->left != nullptr ){
                bag.push(node->left);
            }

            if( node->right != nullptr ){
                bag.push(node->right);
            }
        }
        cout<<endl;
    }
}

int maxDepth(TreeNode* root) {
    if( root == nullptr )
        return 0;

    else{
        int left_d = maxDepth(root->left);
        int right_d = maxDepth(root->right);

        if( left_d > right_d )
            return left_d + 1;
        else
            return right_d + 1;
    }
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

    print_level_order(root);
    cout<<endl<<"depth : "<<maxDepth(root)<<endl;

    return 0;
}
