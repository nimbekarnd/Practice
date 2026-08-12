// Local scratch runner — NOT for LeetCode submission.
// solution.cpp has no main() (LeetCode supplies its own driver), so use
// this file to manually test your solution in the app's Run button.
#include "solution.cpp"

int main() {
    Solution sol;

    // tree: 3 has children 9 and 20; 20 has children 15 and 7
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    auto levels = sol.solve(root);
    for (auto& level : levels) {
        for (int v : level) cout << v << " ";
        cout << endl;
    }
    // expect:
    // 3
    // 9 20
    // 15 7
}
