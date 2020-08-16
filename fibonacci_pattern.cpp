#include<iostream>

using namespace std;

int main(){

int i,num,a,b,temp;

cout<<"Enter the Number:";
cin>>num;

for(int x=1;x<num;x++){              //Iterating for the number of lines
	for(i=1,a=0,b=1;i<=x;++i){   //Iterating for the fibannoci series
		cout<<b<<"  ";
		temp=a+b;a=b;b=temp; //Upating the values
		}
		cout<<"\n";
    }

return 0;
}
