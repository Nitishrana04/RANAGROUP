#include <bits/stdc++.h>
using namespace std;


int countPerfect( int *arr , int k, int n){
	int count =0;
	for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            // Print subarray between current starting
            // and ending points
            int sum = 0;
            for (int k=i; k<=j; k++){
            	sum += arr[k];
            //	cout << arr[k] << " ";
			}
			if(sum == k){
				count++;
			}
            // cout <<" -> "<< sum;
  
            // cout << endl;
        }
    }
    return count;
}


int main() {
	int n , k;
    cin >> n >>k;
    int arr [n];
    for (int i=0; i<n ; i++){
    	cin>>arr[i];
	}
	cout << countPerfect(arr , k, n);
  return 0;
}
