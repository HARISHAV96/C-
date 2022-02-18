#include<iostream>
#include<string>

using namespace std;
int main(){
	string sub1="Hello Sala Ji";
	int pos=sub1.find("Ji",0);
	if(pos!=string::npos)
	cout<<"Hello"<<pos<<endl;
	else
	cout<<"String Not Found";
	int pos1=sub1.find_first_not_of("Ji",0);
    int pos2=sub1.find_last_not_of("Ji",0);
    int pos3=sub1.find_first_of("Ji",0);
    int pos4=sub1.find_last_of("Ji",0);
    cout<<"sub1.find_first_not_of"<<pos1<<endl;
    cout<<"find_last_not_of"<<pos2<<endl;
     cout<<"find_first_of"<<pos3<<endl;
    cout<<"find_last_of"<<pos4<<endl;
}
