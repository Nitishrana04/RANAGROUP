#include<bits/stdc++.h>
using namespace std;

void sortArray(int *arr , int N) {
  int low = 0, mid = 0,   high = N-1;
  while (mid <= high) {
    switch (arr[mid]) {
      case 0:
        swap(arr[low++], arr[mid++]);
        break;
      case 1:
        mid++;
        break;
      case 2:
        swap(arr[mid], arr[high--]);
        break;
    }
  }
}

int main() {
	
	int N;
	cin>>N;
	int arr[N];
	for (int i =0 ; i<N ; i++){
		cin>> arr[i];
	}
  sortArray(arr , N);
  for (int i : arr) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
