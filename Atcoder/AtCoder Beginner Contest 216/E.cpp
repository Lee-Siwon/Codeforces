#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

void init(){
	
}

bool comp(unsigned long long int a, unsigned long long int b){
	return a>b;
}

void solve(){
	unsigned long long int n,k,answer=0;
	vector<unsigned long long int> x;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		unsigned long long int a;
		cin>>a;
		x.push_back(a);
	}
	sort(x.begin(),x.end(),comp);
	x.push_back(0);
//	for(int i=0;i<n;i++)cout<<x[i]<<" ";
	unsigned long long int count=0,num=1;
	while(k){
		if((x[count]-x[count+1])*num>k){
			unsigned long long int a;
			a = k/num;
			if(a)answer+=(x[count]+x[count]-a+1)*a/2 * num;
			k-=num*a;
		//	cout<<answer<<" "<<a<<"\n";
			answer+=(x[count]-a)*k;
			k=0;
		}
		else{
			answer+=(x[count]+x[count+1]+1)*(x[count]-x[count+1])/2 * num;
			k-=num*(x[count]-x[count+1]);
			num++;
		}
		count++;
		if(count==n)break;
	//	cout<<answer<<" "<<k<<"\n";
	}
	cout<<answer;
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
 
