#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

void init(){
	
}

void solve(){
	int n;
	cin>>n;
	string x,y;
	vector<pair<string,string> > m;
	for(int i=0;i<n;i++){
		string a,b;
		cin>>a>>b;
		m.push_back({a,b});
	}
	int answer=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				if(m[i].first==m[j].first&&m[i].second==m[j].second)answer=1;
			}
		}
	}
	if(answer==0)cout<<"No";
	else cout<<"Yes";
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
 
