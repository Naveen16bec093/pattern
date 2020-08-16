#include<iostream>

using namespace std;

int main(){

int i,num,a,b,temp;

cout<<"Enter:";
cin>>num;

for(int x=1;x<num;x++){
	for(i=1,a=0,b=1;i<=x;++i){
		cout<<b<<"  ";
		temp=a+b;a=b;b=temp;
		}
		cout<<"\n";
    }

return 0;
}
