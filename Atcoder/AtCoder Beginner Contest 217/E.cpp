#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

void init(){
	
}

bool comp(int a, int b){
	return a>b;
}

void solve(){
	int n;
	cin>>n;
	vector<int> x,y;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a==1){
			int b;
			cin>>b;
			x.push_back(b);
		}
		else if(a==2){
			if(y.size()){
				cout<<y[0]<<"\n";
				y.erase(y.begin(),y.begin()+1);
			}
			else{
				cout<<x[0]<<"\n";
				x.erase(x.begin(),x.begin()+1);
			}
		}
		else {
			for(int j=0;j<x.size();j++){
				int k = lower_bound(y.begin(),y.end(),x[j])-y.begin();
				y.insert(y.begin()+k,x[j]);
			}
			x.clear();
		}
	}
}

int main(){
	int t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	/*cin>>t;
	for(int i=0;i<t;i++){
		cout<<"Case #"<<i+1<<"\n";
		solve();
		cout<<"\n";
	}*/
	solve();
}
 
