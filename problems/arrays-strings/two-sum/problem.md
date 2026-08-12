# Two Sum

LeetCode: https://leetcode.com/problems/two-sum/
Difficulty: Easy
Topics: Array, Hash Table

## Statement

Given an array of integers `nums` and an integer `target`, return indices of
the two numbers such that they add up to `target`. Each input has exactly one
solution, and you may not use the same element twice.

## Examples

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: nums[0] + nums[1] == 9
```

## Constraints

- 2 <= nums.length <= 10^4
- -10^9 <= nums[i], target <= 10^9
- Exactly one valid answer exists

## Notes / Approach

One-pass hash map: for each value, check if `target - value` was already
seen. O(n) time, O(n) space. Brute force is O(n^2) time, O(1) space.
