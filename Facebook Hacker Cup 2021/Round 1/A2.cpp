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
long long solve(string x){
	long long  answer=0,count=0,before_num=0;
	char before=0;
	for(int i=0;i<x.size();i++){
		if(before==0&&x[i]!='F'){
			before=x[i];
			before_num=i;
		}
		else if(x[i]=='X'){
			if(before=='O'){
				before='X';
				count+=before_num+1;
				before_num=i;
			}
			else{
				before_num=i;
			}
		}
		else if(x[i]=='O'){
			if(before=='X'){
				before = 'O';
				count+=before_num+1;
				before_num=i;
			}
			else{
				before_num=i;
			}
		}
		count%=mod;
		answer+=count;
		answer%=mod;
	}
	return answer;
}

int main(){
	int t;
	ifstream ifs;
	ifs.open("A2Input2.txt");
	ofstream f;
	f.open("A2output.txt");
	ios_base::sync_with_stdio(false);
	ifs>>t;
	for(int i=0;i<t;i++){
		string x;
		int n;
		ifs>>n;
		ifs>>x;
		f<<"Case #"<<i+1<<": ";
		f<<solve(x);
		f<<"\n";
	}
}
 
