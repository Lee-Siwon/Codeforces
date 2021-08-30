#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

void init(){
	
}

void solve(){

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
	char a;
	int x,y;
	cin>>x>>a>>y;
	if(y<3)cout<<x<<"-";
	else if(y<7)cout<<x;
	else cout<<x<<"+";
}
 
