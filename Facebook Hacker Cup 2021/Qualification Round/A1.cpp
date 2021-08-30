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
	ifs.open("input1.txt");
	ofstream f;
	f.open("output.txt");
	ios_base::sync_with_stdio(false);
	ifs>>t;
	for(int i=0;i<t;i++){
		string x;
		ifs>>x;
		f<<"Case #"<<i+1<<": ";
		f<<solve(x);
		f<<"\n";
	}
}
 
 

