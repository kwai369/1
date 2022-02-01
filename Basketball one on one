/* The problem statement can be found at the below link */
/* https://open.kattis.com/problems/basketballoneonone */
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	// get length of string str
    int str_length = str.length();
  
    // create an array with size as string
    // length and initialize with 0
    int arr[str_length] = { 0 };
  
    int j = 0, i;
  
    // Traverse the string
    for (i = 0; str[i] != '\0'; i++) {
  		arr[j] = arr[j] * 10 + (str[i] - 48);
		j++;
	}
	int score_a = 0;
	int score_b = 0; 
	for(int e=0;e<j;e++){
		if(arr[e] == 1){
			if(arr[e-1] == 17){
				score_a++;
			}
			else if(arr[e-1] == 18){
				score_b++;
			}
		}
		else if(arr[e] == 2){
			if(arr[e-1] == 17){
				score_a += 2;
			}
			else if(arr[e-1] == 18){
				score_b += 2;
			}
		}
	}
	if(score_a > score_b){
		cout << "A";
	}
	else{
		cout << "B"; 
	}
	return 0; 
}
