#include<iostream>
using namespace std;

//Euclidean Algorithm

int GCD(int a,int b){
	if(b==0){
		return a;
	}
	else{
		return GCD(b,a%b);
	}
}
int main()
{
	int num1,num2;
	cout<<"Enter two numbers for GCD:"<<endl;
	cin>>num1>>num2;
	cout<<"GCD of given numbers is "<<GCD(num1,num2);
}
