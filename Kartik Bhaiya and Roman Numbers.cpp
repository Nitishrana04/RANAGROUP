#include <bits/stdc++.h>
using namespace std;

int romanToDecimal(string roman) {
  map<char, int> values = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
  int result = 0;
  for (int i = 0; i < roman.length(); i++) {
    int value = values[roman[i]];
    if (i + 1 < roman.length() && values[roman[i + 1]] > value) {
      result -= value;
    } else {
      result += value;
    }
  }
  return result;
}

int main() {

	string N;
	cin>>N;
  //string roman = "MCMXCIV";
  cout << romanToDecimal(N) << endl;
  return 0;
}
