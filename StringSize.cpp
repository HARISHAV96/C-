#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str1,str2,str3,str4;
  cout<<"Enter Full Name"<<endl;
  getline(cin,str1);
  cout<<"The Size Is"<<str1.size()<<endl;
  while(str1.empty()){
  	cout<<"FileName Is Empty"<<endl;
  	break;
  }
  cout<<"Enter NickName"<<endl;
  getline(cin,str2);
  cout<<"\nFull And Nick Name"<<endl<<str1.append(str2)<<endl;
  if(str1==str2){
  	cout<<"The strings Are Equal"<<endl;
  }
  else if(str1.compare(str2)==0){
  		cout<<"The strings Are Equal"<<endl;
  }
  else{
    cout<<"The strings Are Not Equal"<<endl;
}
   str3.assign(str2);
   str4.assign(str2,2,4);
   cout<<"The Copied String Is"<<str3<<endl;
   cout<<"The Partially Copied String Is"<<str4<<endl;
   str1.swap(str2);
    cout<<"Values After Swapping str1 Value"<<str1<<endl;
   cout<<"Values After Swapping str2 Value"<<str2<<endl;
}
