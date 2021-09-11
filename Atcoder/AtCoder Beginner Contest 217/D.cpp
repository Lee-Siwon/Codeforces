#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<map>
#include<stdio.h>
#include<string.h>
using namespace std;
map<int, int> check;
void init(){
	
}

bool comp(pair<long long int, int> a, pair<long long int, int> b){
	return a.first>b.first;
}

void solve(){
	int l,q;
	cin>>l>>q;
	vector<int> x;
	x.push_back(0);
	x.push_back(l);
	for(int i=0;i<q;i++){
		int a,b;
		cin>>a>>b;
		if(a==1){
			int k = lower_bound(x.begin(),x.end(),b)-x.begin();
			x.insert(x.begin()+k,b);
		//	cout<<k<<" ";
		//	for(int j=0;j<x.size();j++)cout<<x[j]<<" ";
		//	cout<<"\n";
		}
		else{
			int k = lower_bound(x.begin(),x.end(),b)-x.begin();
		//	cout<<k<<" ";
			cout<<x[k]-x[k-1]<<"\n";
		}
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
 
