/*
author	: Danu andrean
nim		:1700022001
date	:15-03-2019
*/

#include<iostream>
using namespace std;
int main(){
	for(int i=1;  i <=8; i++){
		for(int j=1; j<=8; j++){
			int val = i*j;
			if (val<10){
				cout<<"|  "<<val;
			}
			else{
				cout<<"| "<<val;}
		}
	cout<<"|"<<endl;
	}
	cin.get();
}