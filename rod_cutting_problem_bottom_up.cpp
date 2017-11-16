#include <bits/stdc++.h>
using namespace std;

#define INF_MIN numeric_limits<int>::min()

int cut_rod_bootom_up(int p[], int n){
    int *r = new int[n+1];
    int q;
    r[0] = 0;
    for(int j=1;j<=n;j++){
        q = INF_MIN;
        for (int i=1;i<=j;i++)
            q=max(q, p[i]+r[j-i]);
        r[j]=q;
    }
    return r[n];
}

int main(){
    int p[] = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    int n;
    cin>>n;
    cout<<cut_rod_bootom_up(p,n)<<endl;
    return 0;
}