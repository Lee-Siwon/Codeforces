#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;

bool comp(int a,int b){
	return a>b;
}
int memo[1501];
void init(){
	int i=1;
	while(i<=1000){
		int t = memo[i-1]+1;
		while(t%10==3||t%3==0)t++;
		memo[i]=t;
		i++;
	}
}

void solve(){
	int n;
	cin>>n;
	cout<<memo[n];
}

int main(){
	int t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
	init();
	for(int i=0;i<t;i++){
	//	cout<<"Case #"<<i+1<<"\n";
		solve();
		cout<<"\n";
	}
}
 
