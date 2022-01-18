/* The problem statement can be found at the below link */
/* http://www.usaco.org/index.php?page=viewproblem2&cpid=1059 */
#include<bits/stdc++.h>
#define ll long long  
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll a[7];
	for(int i=0;i<7;i++){
		cin >> a[i];
	}
	sort(a,a+7);
	for(int i=2;i<7;i++){
		if(a[0]+a[1]+a[i] == a[6]){
			cout << a[0] << " " << a[1] << " " << a[i];
			break;
		}
	}
	return 0;
}
