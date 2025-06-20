# Move all negative elements to end

##### [Link](https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1)


## Problem Description
Given an unsorted array arr[ ] having both negative and positive integers. The task is to place all negative elements at the end of the array without changing the order of positive elements and negative elements.

Note: Don't return any array, just in-place on the array.

### Examples
**Example 1:**

```
Input : arr[] = [1, -1, 3, 2, -7, -5, 11, 6 ]
Output : [1, 3, 2, 11, 6, -1, -7, -5]
Explanation: By doing operations we separated the integers without changing the order.
```


**Example 2:**

```
Input : arr[] = [-5, 7, -3, -4, 9, 10, -1, 11]
Output : [7, 9, 10, 11, -5, -3, -4, -1]
```


### Constraints
- 1 ≤ arr.size ≤ 106
- -109 ≤ arr[i] ≤ 109
