#include<iostream>
#include<string>
using namespace std;
int main()
{
	int x=65;
	double y=4.4345;
	string result= ((int)y>x)?"Value is Greater":"Value Is Lesser";
	cout<<result;
}
