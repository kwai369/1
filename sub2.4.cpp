/* The problem statement can be found at the link below */
/* http://www.usaco.org/index.php?page=viewproblem2&cpid=591 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int start[4],end[4],sum1=0,sum2=0;
	ofstream out("promote.out");
	ifstream in("promote.in");
	for(int i=0;i<4;i++){
		in >> start[i] >> end[i];
		sum1 += start[i];
		sum2 += end[i];		 
	}
	int result[3];
	int current = sum2-sum1;
	for(int i=0;i<3;i++){
		if(current>0){
			if(start[i]>end[i]){
				int difference = start[i] - end[i];
				current += difference;
				result[i] = current;
			}
			else if(start[i] == end[i]){
				result[i] = current;
			}
			else{
				int difference = end[i] - start[i];
				current -= difference;
				result[i] = current;
			}
		}
		else{
			if(start[i] == end[i]){
				result[i] = current;
			}
			else{
				int difference = end[i] - start[i];
				current -= difference;
				result[i] = current;
			}
		}
	}
	for(int i=0;i<3;i++){
		out << result[i] << "\n";
	}
	return 0;
}
