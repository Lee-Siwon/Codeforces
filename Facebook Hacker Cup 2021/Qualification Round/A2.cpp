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
	int memo[30];
	for(int i=0;i<30;i++)memo[i]=0;
	for(int i=0;i<x.size();i++){
		memo[x[i]-'A']++;
	}
	int vowel = memo['A'-'A'] + memo['E'-'A'] + memo['I'-'A'] + memo['O'-'A'] + memo['U'-'A'];
	int consonant = x.size()-vowel;
	int minimum=1e9;
	for(int i=0;i<'Z'-'A'+1;i++){
		int temp=0;
		if(i==0||i==4||i==8||i==14||i==20){
			temp = consonant + (vowel-memo[i])*2;
		}
		else{
			temp = vowel + (consonant-memo[i])*2;
		}
		if(temp<minimum)minimum=temp;
	}
	return minimum;
}

int main(){
	int t;
	ifstream ifs;
	ifs.open("input4.txt");
	ofstream f;
	f.open("output.txt");
	ios_base::sync_with_stdio(false);
	ifs>>t;
	for(int i=0;i<t;i++){
		string x;
		ifs>>x;
		int k;
		vector<int> path[30];
		ifs>>k;
		int dp[30][30];
		memset(dp,-1,sizeof(dp));
		for(int j=0;j<k;j++){
			char a,b;
			ifs>>a>>b;
			path[a-'A'].push_back(b-'A');
		}
		for(int j=0;j<'Z'-'A'+1;j++){
			stack<pair<int,int> > temp;
			dp[j][j]=0;
			for(int k=0;k<path[j].size();k++)temp.push({j,path[j][k]});
			while(temp.size()){
				int a = temp.top().first;
				int b = temp.top().second;
				temp.pop();
				if(dp[j][b]==-1||dp[j][b]>dp[j][a]+1){
					dp[j][b]=dp[j][a]+1;
					for(int k=0;k<path[b].size();k++)temp.push({b,path[b][k]});
				}
			}
		}
		int minimum=1e9;
		for(int j=0;j<'Z'-'A'+1;j++){
			int ans=0,check=0;
			for(int k=0;k<x.size();k++){
				char temp = x[k];
				ans+=dp[temp-'A'][j];
				if(dp[temp-'A'][j]==-1)check=1;
			}
			if(check==0){
				if(minimum>ans)minimum=ans;
			}
		}
		f<<"Case #"<<i+1<<": ";
		if(minimum!=1e9)f<<minimum;
		else f<<"-1";
		f<<"\n";
	}
}
 
 
