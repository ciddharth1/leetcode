# FLOW001

**Platform:** CodeChef
**Difficulty:** Difficulty:  242
**Problem URL:** [https://www.codechef.com/problems/FLOW001](https://www.codechef.com/problems/FLOW001)

## Solutions

### Optimal

- **Language:** `c`
- **Date:** 8/16/2026

```c
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t > 0) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        t--;
    }
    return 0;
}
```

