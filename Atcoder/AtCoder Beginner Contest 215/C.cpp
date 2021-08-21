#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<map>
using namespace std;
map<string,int>check;
vector<string>answer;

void swap(char &a, char &b){
	char temp =a;
	a=b;
	b=temp;
}

void init(vector<char> d,int now,int n){
	if(now==n){
		string temp="";
		for(int i=0;i<n;i++){
			temp+=d[i];
		}
		if(check.find(temp)==check.end()){
			check[temp]++;
			answer.push_back(temp);
		}
		return;
	}
	for(int i=now;i<n;i++){
		swap(d[now],d[i]);
		init(d,now+1,n);
		swap(d[now],d[i]);
	}
}

void solve(){
	string x;
	int k;
	cin>>x>>k;
	vector<char>d;
	for(int i=0;i<x.size();i++){
		d.push_back(x[i]);
	}
	init(d,0,x.size());
	sort(answer.begin(),answer.end());
	cout<<answer[k-1];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	/*int t;
	
	cin>>t;
	for(int i=0;i<t;i++){
		cout<<"Case #"<<i+1<<"\n";
		solve();
		cout<<"\n";
	}*/
	solve();
}
 
