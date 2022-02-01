/* The problem statement can be found at the below link */
/* http://www.usaco.org/index.php?page=viewproblem2&cpid=567 */
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ofstream out("paint.out");
	ifstream in("paint.in");
	int a,b,c,d;
	in >> a >> b >> c >> d;
	if(!(a>d || b<c)){	
		int wanted_to[b-a];
		for(int i=a+1,j=0;i<=b;i++,j++){
			wanted_to[j] = i;
		}	
		int become[d-c];
		for(int i=c+1,j=0;i<=d;i++,j++){
			become[j] = i;
		}
		int wanted_to_result[b-a];
		for(int i=0;i<(b-a);i++){
			wanted_to_result[i] = 0;
		}
		int e=0;
		for(int i=0;i<(d-c);i++){
			for(int j=0;j<(b-a);j++){
				if(become[i] == wanted_to[j]){
					wanted_to_result[e] = 1;
					e++;
					break;	
				}
			}
		}
		int ans1=0;
		for(int i=0;i<(b-a);i++){
			if(wanted_to_result[i]==0){
				ans1++;
			}
		}
		int ans = ans1 + (d-c);
		out << ans;
	}
	else{
		out << (b-a)+(d-c);
	}
	return 0; 
}
