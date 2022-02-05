#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int n;
int sum=0;

int main(){
	cout<<"ENTER N \n";
	cin>>n;
	for(int i=1;i<round(n/2)+1;i++){ //we stop iterating at n/2 because it will take less time .
		if ((n % i)==0){
			sum+= pow(i,2);
		}
		else {
			sum=sum;
		}
	}
	cout<<"\n"<<sum+(n*n);// we add n^2 because n is also a divisor
	return 0;

}
