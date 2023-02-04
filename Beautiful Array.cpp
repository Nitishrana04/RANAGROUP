#include<bits/stdc++.h>
#include<tr1/unordered_map>
using namespace std;


int findshortarray(vector<int>& v1){
	unordered_map<int,int> cnt,first;
	int deg = 0,ans=0;
	for(int i=0;i<v1.size();i++){
		if(cnt[v1[i]] == 0){
			first[v1[i]]=i;
		}
		cnt[v1[i]]++;
		if(cnt[v1[i]]>deg){
			ans = i-first[v1[i]]+1;
			deg =cnt[v1[i]];
		} else if(cnt[v1[i]] ==deg){
			ans = min(ans,i-first[v1[i]+1]);
		}
		
	}
	return ans;
}
int main (){
	vector<int> v1;
	int N , i,x;
	cin>>N;
	int array[N];
	for(i= 0;i<N;i++){
		cin>>x;
		v1.push_back(x);
	}
	cout<<findshortarray(v1);
	return 0;
}
