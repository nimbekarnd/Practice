# Climbing Stairs

LeetCode: https://leetcode.com/problems/climbing-stairs/
Difficulty: Easy
Topics: Dynamic Programming, Math

## Statement

You are climbing a staircase. It takes `n` steps to reach the top. Each time
you can climb 1 or 2 steps. In how many distinct ways can you climb to the
top?

## Examples

```
Input: n = 3
Output: 3
Explanation: 1+1+1, 1+2, 2+1
```

## Constraints

- 1 <= n <= 45

## Notes / Approach

`ways(n) = ways(n-1) + ways(n-2)` — it's Fibonacci in disguise (last step is
either a 1-step or a 2-step). Bottom-up with two rolling variables gives
O(n) time, O(1) space instead of O(n) space for a full DP array.
