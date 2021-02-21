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

TreeNode * make_node( int l_border, int r_border, vector<int>& nums ){
    if( l_border > r_border )
        return nullptr;

    int mid = l_border + ( r_border - l_border )/2;
    TreeNode * root = new TreeNode(nums[mid]);
    root->left = make_node( l_border, mid-1, nums );
    root->right = make_node( mid+1, r_border, nums );

    return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return make_node( 0, nums.size()-1, nums );
}

int main(){
    vector<int> arr = {-10,-3,0,5,9};
    TreeNode * root = sortedArrayToBST(arr);
    print_level_order(root);

    return 0;
}
