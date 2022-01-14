/* The problem statement can be found in the below link */
/* https://codeforces.com/problemset/problem/231/A */
#include<bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,ans=0;
	scanf("%d",&n);
	int a[n*3];
	for(int i=0;i<(n*3);i++){
		scanf("%d",&a[i]);
	}	
	for(int i=0;i<(n*3);i+=3){
		if(a[i] == 1 && a[i+1] == 1){
			ans++;
		}
		else if(a[i] == 1 && a[i+2] == 1){
			ans++;
		}
		else if(a[i+1] == 1 && a[i+2] == 1){
			ans++;
		}
		else if(a[i] == 1 && a[i+1] == 1 && a[i+2] == 1){
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
