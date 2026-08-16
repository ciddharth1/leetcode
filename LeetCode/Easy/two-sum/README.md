# Two Sum

**Platform:** LeetCode
**Difficulty:** Easy  
**Problem URL:** [https://leetcode.com/problems/two-sum/](https://leetcode.com/problems/two-sum/)

## Solutions

### Brute Force

- **Language:** `java`
- **Runtime:** `0 ms
Case 1
Case 2
Case 3
Input
nums`
- **Date:** 8/16/2026

```java
class Solution {
    public int[] twoSum(int[] a, int target) {
        int t,k;
        for( int i=0;i<a.length;i++){
            for(int j=i+1;j<a.length;j++){
                if(a[i]+a[j]==target){
                     return new int[]{i, j};
                }
            }
        }
        return new int[]{};
    }
        // Code2Git UPDATE TEST
}

```

### Optimal

- **Language:** C++
- **Time Complexity:** Not specified
- **Space Complexity:** Not specified
- **Solution:** [optimal.cpp](./optimal.cpp)
