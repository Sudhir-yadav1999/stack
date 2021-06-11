#include <bits/stdc++.h>
using namespace std;

void showtrack(stack<int> s)
{
    while(!s.empty())
    {
        cout<<"The element is :: "<<s.top()<<endl;
        s.pop();
        
    }
}

int main()
{
	stack<int> s;
    
    int num;
    cout<<"Enter the Decimal Number :"<<endl;
    cin>>num;
    int number=num;
    int base =2;
    int digit;
    while(num>0)
    {
        digit =num%base;
        s.push(digit);
        num /=base;
    }
    string binary="";
    
    while(!s.empty())
    {
        binary +=to_string(s.top());
        s.pop();
    }
    
    cout<<"The binary number of the decimal no"<<number<<" is :"<<binary<<endl;
    
	showtrack(s);
	
	return 0;
}
