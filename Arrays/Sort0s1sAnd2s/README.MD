# Sort 0s, 1s and 2s
##### [Link](https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0)


## Problem Description
Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.

You need to solve this problem without utilizing the built-in sort function.

### Examples
**Example 1:**

```
Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]
Explanation: 0s 1s and 2s are segregated into ascending order.
```


**Example 2:**

```
Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
Explanation: 0s 1s and 2s are segregated into ascending order.

Follow up: Could you come up with a one-pass algorithm using only constant extra space?
```


### Constraints
- 1 <= arr.size() <= 10^6
- 0 <= arr[i] <= 2

