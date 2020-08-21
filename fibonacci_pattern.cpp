#include<iostream>

using namespace std;//Namespace for using cin,cout..etc.




void print_asterisk(int asterisk) 
{ 
    if (asterisk == 0) 
        return; 
    cout << "* "; 
    print_asterisk(asterisk - 1); 
} 
  
// function to print the upper-half of the pattern 
void pattern_upper(int n, int num) 
{ 
    // base case 
    if (n == 0) 
        return; 
    print_asterisk(n); 
    cout << endl; 
  
    // recursively calling pattern_upper() 
    pattern_upper(n - 1, num); 
} 
  
// function to print the lower-half of the pattern 
void pattern_lower(int n, int num) 
{ 
    // base case 
    if (n == 0) 
        return; 
    print_asterisk(num - n + 1); 
    cout << endl; 
  
    // recursively calling pattern_lower() 
    pattern_lower(n - 1, num); 
} 
  
// function to print the pattern 
void pattern(int n, int num) 
{ 
    pattern_upper(n, num); 
    pattern_lower(n - 1, num); 
} 

void fib(int num)
{
	
int i,a,b,temp;//Variable Declaration


for(int x=1;x<num;x++){              //Iterating for the number of lines
	for(i=1,a=0,b=1;i<=x;++i){   //Iterating for the fibannoci series
		cout<<b<<"  ";
		temp=a+b;a=b;b=temp; //Upating the values
		}
		cout<<"\n";
    }
}

int main(){
//this is the main function	
int num;
cout<<"Enter the Number:";
cin>>num;
		fib(num);
    
int n = 5; 
  		pattern(n, n);
	
return 0;
}


