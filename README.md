# Algorithms
---
## Dynamic Programming

### Rod-Cutting Problem (Recursive)

![equation](img/cut_rod.png)

```c++
int cut_rod(int p[], int n){
    if (n==0) return 0;
    int q = numeric_limits<int>::min();
    for(int i=1;i<=n;i++)
        q = max(q, p[i] + cut_rod(p, n-i));
    return q;
}
```