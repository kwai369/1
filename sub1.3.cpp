/* The problem statement can be found in the below link */
/* https://cses.fi/problemset/task/1068/ */

#include<bits/stdc++.h> 
#define ll long long
using namespace std;
 
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll x;
	cin >> x;
	if(x>1){	
		while(x!=1){
			cout << x << " ";
			if(x%2==0){
				x /= 2;
			}
			else{
				x = (x*3)+1;
			}
		}
		cout << 1;
	}
	else{
		cout << x;
	}
	return 0;
}
