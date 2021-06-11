----------------
Using fuunctions 
----------------

#include <bits/stdc++.h>
using namespace std;

void showtrack(stack<int> s)
{
    while(!s.empty())
    {
        cout<<"The element is :: "<<s.top()<<endl;
        s.pop(); //copy of the stack is popped orignal stack is not popped
        
    }
}

int main()
{
	stack<int> s;
	int n;
	for(int i=0;i<5;i++)
	{
	cin>>n;
	s.push(n);
	}
	
	showtrack(s);
	
	cout<<"The top element of stack is :"<<s.top();//
	
	
	return 0;
}
