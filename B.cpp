#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

void init(){
	
}

void solve(){
	long long int a,b,c;
	cin>>a>>b>>c;
	if(b<a){
		long long int temp=b;
		b=a;
		a=temp;
	}
	long long int gap = b-a;
	if(gap<a)cout<<"-1";
	else {
		long long int ans = gap-a+b;
		if(ans<c)cout<<"-1";
		else if(c+gap>ans)cout<<c+gap-ans;
		else cout<<c+gap;
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
 
