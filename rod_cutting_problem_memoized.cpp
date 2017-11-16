#include <bits/stdc++.h>
using namespace std;

#define MIN numeric_limits<int>::min()


int cut_rod_memoized_aux(int p[], int n, int r[]){
    int q;
    if(r[n]>=0) return r[n];
    if(n==0) q=0;
    else{
        q = MIN;
        for(int i=1;i<=n;i++){
            q=max(q, p[i]+cut_rod_memoized_aux(p,n-i,r));
        }
    }
    r[n]=q;
    return q;

}

int cut_rod_memoized(int p[],int n){
    int *r=new int[n+1];
    for(int i=0;i<=n;i++)
        r[i]=MIN;
    return cut_rod_memoized_aux(p,n,r);
}



int main(){
    int p[] = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    int n;
    cin>>n;
    cout<<cut_rod_memoized(p,n)<<endl;
    return 0;
}