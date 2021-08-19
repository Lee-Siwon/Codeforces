#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

void init(){
	
}

void solve(){
	long long int check=0,k;
	cin>>k;
	long long int x = sqrt(k);
	if(x*x==k){
		cout<<x<<" "<<1;
	}
	else{
		k-=x*x;
		if(k<=x)cout<<k<<" "<<x+1;
		else if(k==x+1)cout<<x+1<<" "<<x+1;
		else{
			k-=x+1;
			cout<<x+1<<" "<<x-k+1;
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
 
