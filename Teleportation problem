/* The problem statment can be found at the below link */
/* http://www.usaco.org/index.php?page=viewproblem2&cpid=807 */
/* The first solution is the one which is coded by him */ 
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,b,x,y;
	cin >> a >> b >> x >> y;
	if(x>y){
			int temp = y;
			y = x;
			x = temp;
	}
	if(a>b){
		int temp = b;
		b = a;
		a = temp;
	}
	if(a != b){	
		if(y<a || x>b){
			cout << abs(b-a) << "\n";	
		}
		else{
			if(x<a && y<b){
				int ans1 = (a-x) + (b-y);
				int ans2 = abs(b-a);
				if(ans2<ans1){	
					cout << ans2 << "\n";
				}
				else{
					cout << ans1 << "\n";
				}
			}
			else if(x<a && y==b){
				int ans = (a-x);
				cout << ans << "\n";
			}
			else if(x<a && y>b){
				int ans = (a-x) + (y-b);
				cout << ans << "\n";
			}
			else if(x==a && y<b){
				int ans = (b-y);
				cout << ans << "\n";	
			}
			else if(x==a && y==b){
				cout << 0 << "\n";
			}
			else if(x==a && y>b){
				int ans = (y-b);
				cout << ans << "\n";
			}
			else if(x>a && y<b){
				int ans = (x-a) + (b-y);
				cout << ans << "\n";
			}
			else if(x>a && y==b){
				int ans = (x-a);
				cout << ans << "\n";
			}
			else if(x>a && y>b){
				int ans2 = (x-a) + (y-b);
				int ans1 = abs(b-a);
				if(ans1<ans2){	
					cout << ans1 << "\n";
				}
				else{
					cout << ans2 << "\n";
				}
			}
		}
	}
	else{
		cout << "0" << "\n";
	}
	return 0; 
}
/* The second solution is the solution which is more precise than the first solution but it is not coded by him */
(Analysis by Brian Dean)
This problem is relatively straightforward -- we need to choose between three alternatives:

- If Farmer John drives directly from a to b without teleporting, he travels a distance of |a−b|.

- Farmer John could travel from a to x, teleport to y, then travel to b, for a distance of |a−x|+|b−y|.

- Farmer John could travel from a to y, teleport to x, then travel to b, for a distance of |a−y|+|b−x|.

Taking the smallest of these three yields the answer.

#include <iostream>
#include <algorithm>
using namespace std;
 
int main(void)
{
  int a, b, X[8], Y[8], x, y;
  cin >> a >> b;
  cin >> x >> y;
  int answer = abs(a-b); // no teleport
  answer = min(answer, abs(a-x) + abs(b-y));
  answer = min(answer, abs(a-y) + abs(b-x));
  cout << answer << "\n";
  return 0;
}
