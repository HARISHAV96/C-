#include<iostream>
using namespace std;

int main()
{
	for(int i=0;i<5;i++){
			if(i<5){
				goto end;
			}
	}
	end:cout<<"Goto";

}
