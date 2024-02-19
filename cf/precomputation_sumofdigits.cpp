// 1926c
// 1,2,3,4,5,6,7,8,9,10,11,12.
// 1,2,3,4,5,6,7,8,9, 1, 2, 3.
// The sum of these numbers is 1+2+3+4+5+6+7+8+9+1+2+3=51
// time limit for this problem is only 0.5 seconds per test.
#include <bits/stdc++.h>
using namespace std;
const int N=2*(1e5);
int main() {
    int t;
    cin >> t; // number of test cases
    int sum[N + 1];
    
    for (int i = 2; i <= N; i++) {
        int res = 0;
        int num = i;
        sum[1]=1;
        while (num > 0) {
            int rem = num % 10;
            res += rem;
            num /= 10;
        }
        // sum[i] = res;
        sum[i]=sum[i-1]+res;
 
    }
 
    while (t-->0) {
        int n , s=0; cin >> n ;
        // for(int i=1;i<=n;i++){
        //     s=s+sum[i];
        // }
        cout<<sum[n]<<endl;
    }
    return 0;
}
