#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

void init(){
	
}

void solve(){
	vector<string> x;
	x.push_back("ABC");
	x.push_back("ARC");
	x.push_back("AGC");
	x.push_back("AHC");
	for(int i=0;i<3;i++){
		string a;
		cin>>a;
		for(int j=0;j<x.size();j++){
			if(x[j]==a){
				x.erase(x.begin()+j,x.begin()+j+1);
				break;
			}
		}
	}
	cout<<x[0];
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
 
