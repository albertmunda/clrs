/**
 * Problem: Rod Cutting Problem: Recursive
 * r_n = max_{1<=i<=n}(p_{i}+r_{n-i})
 **/

#include <bits/stdc++.h>

using namespace std;


int cut_rod(int p[], int n){
    if (n==0) return 0;
    int q = numeric_limits<int>::min();
    for(int i=1;i<=n;i++)
        q = max(q, p[i] + cut_rod(p, n-i));
    return q;
}


int main(){
    int p[]={0,1,5,8,9,10,17,17,20,24,30};
    cout<<cut_rod(p,10)<<endl;
    return 0;
}