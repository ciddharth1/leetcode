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
    public int[] twoSum(int[] arr, int target) {
        int t,k;
        for( int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]+arr[j]==target){
                     return new int[]{i, j};
                }
            }
        }
        return new int[]{};
    }
}

```

