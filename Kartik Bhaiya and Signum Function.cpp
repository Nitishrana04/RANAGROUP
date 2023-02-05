#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >>N;
	float p;
	for (int i=0 ; i<N ;i++){
		int x;
		cin>>x;
		p*=x;
	}
	if (p>0){
		cout<<1;
	}
	else if(p<0){
		cout<<"-1";
	}
	else {
		cout<<0;
	}
	return 0;
}
