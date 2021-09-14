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
#define mod 1000000007


map<int, int> cake; 
stack<int> check;

void init(){
	
}
long long solve(){

}

int main(){
	int t;
	ifstream ifs;
	ifs.open("BInput2.txt");
	ofstream f;
	f.open("Boutput.txt");
	ios_base::sync_with_stdio(false);
	ifs>>t;
	for(int i=0;i<t;i++){
		int n,m,a,b;
		ifs>>n>>m>>a>>b;
		int num = n+m-1;
		f<<"Case #"<<i+1<<": ";
		if(a<num||b<num)f<<"Impossible";
		else {
			f<<"Possible\n";
			for(int j=0;j<n;j++){
				for(int k=0;k<m;k++){
					if(j==0&&k==0)f<<a-num+1;
					else if(j==0&&k==m-1)f<<b-num+1;
					else f<<1;
					f<<" ";
				}
				f<<"\n";
			}
		}
		f<<"\n";
	}
}
