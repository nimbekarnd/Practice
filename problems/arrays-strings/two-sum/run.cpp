// Local scratch runner — NOT for LeetCode submission.
// solution.cpp has no main() (LeetCode supplies its own driver), so use
// this file to manually test your solution in the app's Run button.
#include "solution.cpp"

int main() {
    Solution sol;

    vector<int> nums1 = {2, 7, 11, 15};
    auto r1 = sol.solve(nums1, 9);
    cout << r1[0] << " " << r1[1] << " (expect 0 1)" << endl;

    vector<int> nums2 = {3, 2, 4};
    auto r2 = sol.solve(nums2, 6);
    cout << r2[0] << " " << r2[1] << " (expect 1 2)" << endl;
}
