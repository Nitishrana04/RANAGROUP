#include<bits/stdc++.h>
#include<tr1/unordered_map>
using namespace std;


int next(vector<int>& nums, int i){
    int n = nums.size();
    return (n+nums[i]+i)%n;
}

string circularArrayLoop(vector<int>& nums) {
    int n = nums.size();
    for(int &num: nums)
        num %= n;
    for(int i=0;i<n;i++){
        int slow = i,
            fast = i;
        while(nums[slow]*nums[next(nums,fast)]>0 && nums[slow]*nums[next(nums,next(nums,fast))]>0){
            slow = next(nums,slow);
            fast = next(nums,next(nums,fast));
            if(slow==fast){
                if(slow==next(nums,slow))
                    return "NO";
                return "YES";
            }
        }
        int j = i;
        int val = nums[i];
        while (nums[j] * val > 0) {
            int nexx = next(nums,j);
            nums[j] = 0;
            j = nexx;
        }
    }
    
    return "NO";
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
	cout<<circularArrayLoop(v1);
	return 0;
}
