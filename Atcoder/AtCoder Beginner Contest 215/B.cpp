#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

void init(){
	
}

void solve(){
	unsigned long long int x;
	cin>>x;
	unsigned long long int count=-1,i=1;
	while(i<=x){
		i*=2;
		count++;
	}
	cout<<count;
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
 
