# Binary Tree Level Order Traversal

LeetCode: https://leetcode.com/problems/binary-tree-level-order-traversal/
Difficulty: Medium
Topics: Tree, BFS, Binary Tree

## Statement

Given the root of a binary tree, return the level order traversal of its
nodes' values (i.e., from left to right, level by level).

## Examples

```
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
```

## Constraints

- Number of nodes in [0, 2000]
- -1000 <= Node.val <= 1000

## Notes / Approach

Standard BFS with a queue: process one full level at a time by snapshotting
the queue length before draining it. O(n) time, O(n) space.
