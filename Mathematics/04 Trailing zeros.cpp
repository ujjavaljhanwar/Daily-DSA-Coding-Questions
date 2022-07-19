#include<iostream>
using namespace std;

int TrailingZeros(int n){
	int res=0;
	if(n==5){
		return 1;
	}
	for(int i=5;i<n;i*=5){
		res=res+n/i;
	}
	return res;
}

int main()
{
	int num;
	cout<<"Enter the number for factorial: ";
	cin>>num;
	cout<<"No. of trailing zeroes is :"<<TrailingZeros(num)<<endl;
	
}
