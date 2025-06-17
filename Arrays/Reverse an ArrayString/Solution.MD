## Approach
The solution uses the two-pointer technique to reverse the input character array (`vector<char>& s`) in-place, adhering to the problem's requirement of O(1) extra memory. Here's a step-by-step breakdown:

- **Initialize Pointers**:
  - `start` is set to 0 (the beginning of the array).
  - `end` is set to `s.size() - 1` (the last index of the array).
- **While Loop**:
  - The loop runs as long as `start < end`, ensuring we process only the necessary portion of the array (up to the middle).
  - This condition prevents redundant swaps when the pointers meet or cross (for odd or even-length arrays).
- **Swap Operation**:
  - Inside the loop, `swap(s[start], s[end])` exchanges the characters at the `start` and `end` indices.
  - The `swap` function is a standard C++ utility that efficiently swaps two elements.
- **Update Pointers**:
  - `start++` moves the `start` pointer one step toward the right.
  - `end--` moves the `end` pointer one step toward the left.
  - This continues until `start` and `end` meet or cross, at which point the array is fully reversed.

**Example**:
- For input `s = ['h', 'e', 'l', 'l', 'o']`:
  - Initial: `start = 0 ('h'), end = 4 ('o')`
  - First iteration: Swap `'h'` and `'o'` → `['o', 'e', 'l', 'l', 'h']`, `start = 1, end = 3`
  - Second iteration: Swap `'e'` and `'l'` → `['o', 'l', 'l', 'e', 'h']`, `start = 2, end = 2`
  - Loop ends (since `start == end`), result: `['o', 'l', 'l', 'e', 'h']`

**Time and Space Complexity**:
- **Time Complexity**: O(n/2) ≈ O(n), where n is the length of the array, as we process half the array to reverse it.
- **Space Complexity**: O(1), as we only use two pointers (`start` and `end`) and modify the array in-place without additional data structures.