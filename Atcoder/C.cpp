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


void init(){

}

void solve(){
	int n;
	cin>>n;
	int x[n+1];
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		x[a]=i+1;
	}	
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
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
 
