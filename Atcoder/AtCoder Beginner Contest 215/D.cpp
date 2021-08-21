#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<map>
#include<string.h>
using namespace std;
map<int, int> check;
void init(){
	
}

bool comp(pair<long long int, int> a, pair<long long int, int> b){
	return a.first>b.first;
}

void solve(){
	int n,m;
	cin>>n>>m;
	int dp[m+1];
	memset(dp,0,sizeof(dp));
	vector<int> x;
	check[1]=1;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		for(int j=1;j*j<=a;j++){
			if(a%j==0){
				if(check.find(j)==check.end()){
					x.push_back(j);
					check[j]=1;
				}
				if(check.find(a/j)==check.end()){
					x.push_back(a/j);
					check[a/j]=1;
				}
			}
		} 
	}
	for(int i=0;i<x.size();i++){
		for(int j=1;x[i]*j<=m;j++){
			dp[x[i]*j]++;
		}
	}
	int answer=0;
	queue<int> answer1;
	for(int i=1;i<=m;i++){
		if(dp[i]==0){
			answer++;
			answer1.push(i);
		}
	}
	cout<<answer<<"\n";
	while(answer1.size()){
		cout<<answer1.front()<<"\n";
		answer1.pop();
	}
}

int main(){
	/*int t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
	for(int i=0;i<t;i++){
		cout<<"Case #"<<i+1<<"\n";
		solve();
		cout<<"\n";
	}*/
	solve();
}
 
