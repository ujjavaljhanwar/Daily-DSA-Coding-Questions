#include<iostream>
using namespace std;
int main()
{
	int num,a,b,rev=0;
	cout<<"Enter the number:";
	cin>>num;
	a=num;
	while(a!=0){
		b=a%10;
		a=a/10;
		rev=rev*10+b;
	}
	if(num==rev){
		cout<<"Given number is palindrome";
	}
	else{
		cout<<"Given number is not palindrome";
	}
	
}
