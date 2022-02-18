#include<iostream>
#include<string>

using namespace std;
int main(){
	string sub1="Hello Sala Ji";
	int pos=sub1.find("Ji",0);
	if(pos!=string::npos)
	cout<<"Hello"<<pos;
	else
	cout<<"String Not Found";
}
