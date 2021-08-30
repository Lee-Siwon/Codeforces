#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<map>
#include<stack>
#include<queue>
using namespace std;
map<string,int>check;
vector<string>answer;


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
	long long int x;
	stack<char> answer;
	cin>>x;
	while(x){
		if(x%2==0){
			answer.push('B');
			x/=2;
		}
		else{
			answer.push('A');
			x--;
		}
	}
	while(answer.size()){
		cout<<answer.top();
		answer.pop();
	}
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
 
