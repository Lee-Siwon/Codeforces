#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stack>
#include<fstream>
#include<map>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<string.h>
#include<time.h>
using namespace std;

map<int, int> cake; 
stack<int> check;

void init(){
	
}
int solve(string x){

}

int main(){
	int t;
	ifstream ifs;
	ifs.open("inputb2.txt");
	ofstream f;
	f.open("outputb.txt");
	ios_base::sync_with_stdio(false);
	ifs>>t;
	for(int i=0;i<t;i++){
		int n,total=0;
		ifs>>n;
		char x[n+1][n+1];
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				ifs>>x[j][k];
		//		cout<<x[j][k]<<" ";
				if(x[j][k]=='.')total++;
			}
		//	cout<<"\n";
		}
		int dp[75];
		memset(dp,0,sizeof(dp));
		for(int j=0;j<n;j++){
			int check=0,num=0;
			for(int k=0;k<n;k++){
				if(x[j][k]=='.')num++;
				else if(x[j][k]=='O')check=1;
			}
	//		if(i==9)cout<<num<<" "<<check<<"\n";
			if(check==0){
				int a,b;
				if(num==1){
					for(int k=0;k<n;k++)if(x[j][k]=='.'){
						a=j;
						b=k;
					}
					int num2=0,check2=0;
					for(int k=0;k<n;k++){
						if(x[k][b]=='.')num2++;
						else if(x[k][b]=='O')check2=1;
					}
					if(check2==0&&num2!=1)dp[num]++;
					else if(check2==1)dp[num]++;
				}
				else{
					dp[num]++;
				}
			}
			check=0,num=0;
			for(int k=0;k<n;k++){
				if(x[k][j]=='.')num++;
				else if(x[k][j]=='O')check=1;
			}
			if(check==0)dp[num]++;
		}
		if(i==9)cout<<min(n,total/2+total%2);
		int num=-1;
		for(int j=1;j<=min(n,total/2+total%2);j++){
		//	cout<<dp[j]<<"\n";
			if(dp[j]){
				num=j;
				break;
			}
		}
		f<<"Case #"<<i+1<<": ";
		if(num!=-1)f<<num<<" "<<dp[num];
		else f<<"Impossible";
		f<<"\n";
	}
}
 
 
