#include<iostream>
using namespace std;

int fact(int num)
{
	if(num==0)
		return 1;
	return num*fact(num-1);
}


int main()
{
	int num,n,ans=1;
	cout<<"Enter the number: ";
	cin>>num;
	for(int i=2;i<=num;i++){
		ans=ans*i;
	}
	cout<<"Factorial is: "<<ans<<endl;
	cout<<fact(num);
}
