#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string.h>
#include<set>
using namespace std;

void init(){
	
}

void solve(){
	string n;
	long long int k;
	cin>>n>>k;
	while(1){
		set<char> x;
		for(int i=0;i<n.size();i++){
			x.insert(n[i]);
		}
		if(x.size()<=k){
			cout<<n;
			return;
		}
		x.clear();
		for(int i=0;;i++){
			x.insert(n[i]);
			if(x.size()>k){
				while(n[i]=='9')i--;
				n[i]++;
				for(int j=i+1;j<n.size();j++)n[j]='0';
				break;
			}
		}
	}
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
 
