#include "solution.cpp"
#include <iostream>
#include <cassert>
using namespace std;

int tests_run = 0;
int tests_passed = 0;

void check(vector<int> actual, vector<int> expected, string name) {
    tests_run++;
    if (actual == expected) {
        tests_passed++;
        cout << "[PASS] " << name << endl;
    } else {
        cout << "[FAIL] " << name << " -- got {";
        for (int x : actual) cout << x << " ";
        cout << "}, expected {";
        for (int x : expected) cout << x << " ";
        cout << "}" << endl;
    }
}

int main() {
    Solution sol;

    vector<int> nums1 = {2, 7, 11, 15};
    check(sol.solve(nums1, 9), {0, 1}, "example 1");

    vector<int> nums2 = {3, 2, 4};
    check(sol.solve(nums2, 6), {1, 2}, "example 2");

    vector<int> nums3 = {3, 3};
    check(sol.solve(nums3, 6), {0, 1}, "duplicate values");

    cout << tests_passed << "/" << tests_run << " tests passed" << endl;
    return (tests_passed == tests_run) ? 0 : 1;
}
