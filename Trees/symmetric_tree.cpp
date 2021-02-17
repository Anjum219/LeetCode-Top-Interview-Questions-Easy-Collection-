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

bool is_mirror( TreeNode * t1, TreeNode * t2 ){
    if( t1 == nullptr && t2 == nullptr )
        return true;
    if( t1 == nullptr || t2 == nullptr )
        return false;
    return ( t1->val == t2->val ) && is_mirror( t1->left, t2->right ) && is_mirror( t1->right, t2->left );
}

bool isSymmetric(TreeNode* root) {
    return is_mirror( root, root );
}

int main(){
    TreeNode * root = new TreeNode(10);
    TreeNode * node1 = new TreeNode(5);
    TreeNode * node2 = new TreeNode(2);
    TreeNode * node5 = new TreeNode(7);
    TreeNode * node6 = new TreeNode(5);
    TreeNode * node7 = new TreeNode(7);
    TreeNode * node8 = new TreeNode(2);

    root->left = node1;
    root->right = node6;
    node1->left = node2;
    node1->right = node5;
    node6->left = node7;
    node6->right = node8;

    print_level_order(root);
    cout<<endl<<"Symmetric : "<<isSymmetric(root)<<endl;

    return 0;
}
