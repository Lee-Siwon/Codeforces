#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<cmath>
using namespace std;

void init(){
	
}

int dp[21][21];

void solve(){
	long long int n;
	cin>>n;
	long long int memo[21],memo1[21];
	long long int copy = n,size=0,i=0;
	while(copy){
		copy/=10;
		size++;
	}
	long long int size1=size;
	unsigned long long int x=1;
	copy=n;
	while(copy){
		size1--;
		memo[size1]=copy%10;
		copy/=10;
	}
	long long int temp=1,answer=size+1;
	size1=0;
	while(i<60){
		if(temp>=x){
			size1++;x*=10;
		}
		long long int j=1,copy = temp;
		while(copy){
			memo1[size1-j]=copy%10;
			copy/=10;
			j++;
		}

		long long int k=0;
		for(int i=0;i<size;i++){
			int x = memo[i];
			if(x==memo1[k]&&k<size1){
				k++;
			}
		}
		k = size1-k+size-k;
		if(answer>k)answer=k;
		i++;
		temp*=2;
	}
	cout<<answer;
}

int main(){
	int t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
	for(int i=0;i<t;i++){
	//	cout<<"Case #"<<i+1<<"\n";
		solve();
		cout<<"\n";
	}
}
 
