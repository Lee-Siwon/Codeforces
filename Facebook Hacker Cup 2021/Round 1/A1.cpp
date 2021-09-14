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
	int answer=0;
	char before=0;
	for(int i=0;i<x.size();i++){
		if(x[i]=='F')continue;
		if(before==0)before=x[i];
		else if(x[i]=='X'){
			if(before=='O'){
				before='X';
				answer++;
			}
		}
		else if(x[i]=='O'){
			if(before=='X'){
				before = 'O';
				answer++;
			}
		}
	}
	return answer;
}

int main(){
	int t;
	ifstream ifs;
	ifs.open("Input2.txt");
	ofstream f;
	f.open("output.txt");
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
 
