#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
   return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}
string reverseVowel(string s){
	
	int start=0 , end = s.length()-1;
	while (start < end ){
		if (isVowel(s[start]) && isVowel( s[end]) ){
			char temp = s[start];
			s[start] = s[end];
			s[end] = temp;
			 start ++;
			 end --;
		}
		else if(isVowel(s[start]))
		{
			end--;
		}
		else{
			start++;
		}
	}
	return s;
}
 
int main(){
	string a;
	cin >> a ;

	string ans= reverseVowel(a);
	
	cout<<ans;
	return 0;
	
}
