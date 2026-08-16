# Two Sum

**Platform:** LeetCode
**Difficulty:** Easy
**Problem URL:** [https://leetcode.com/problems/two-sum/](https://leetcode.com/problems/two-sum/)

## Solutions

### Optimal

- **Language:** `cpp`
- **Runtime:** `0 ms
Case 1
Case 2
Case 3
Input
nums`
- **Date:** 8/16/2026

```cpp
    vector<int> twoSum(vector<int>& arr, int x) {

        vector<int> v(2);
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == x) {
                    v[0] = i;
                    v[1] = j;
                    return v;
                }
            }
        }
        return v;
    }
};
public:
class Solution {

```

