
Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, 
where a new element is added at one end and (top) an element is removed from that end only.

stack<int> numbers;
stack<string> people;
stack<double> ratios;
stack<char> operators;	
	
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

---------------------------
Emplace
---------------------------
s.emplace()
This function is used to insert a new element into the stack container,
the new element is added on top of the stack. 


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
	int n;
	for(int i=0;i<5;i++)
	{
	cin>>n;
	s.push(n);
	}
	
	s.emplace(89); //added on the top of the stack 
	showtrack(s);
	
	cout<<"The top element of stack is :"<<s.top();//
	
	
	return 0;
}


========================================================
	
#include <bits/stdc++.h>
using namespace std;

void showtrack(stack<string> s)
{
    while(!s.empty())
    {
        cout<<"The element is :: "<<s.top()<<endl;
        s.pop();
        
    }
}

int main()
{
	stack<string> s;
    
    s.push("Hello");
    s.push("How ar u");
    s.push("Love you");
	
	showtrack(s);
	return 0;
}
===================================

----------
Palindrome
----------
#include <bits/stdc++.h>
using namespace std;

void showtrack(stack<char> s)
{
    while(!s.empty())
    {
        cout<<"The element is :: "<<s.top()<<endl;
        s.pop();
        
    }
}

int main()
{
    stack<char> s;
    string word;
    
    cout<<"Enter the word you want to check palindrome for :;"<<endl;
    cin>>word;
    for(int i=0;i<word.size();i++)
    {
        s.push(word[i]);
    }
    
    string rev="";
    
    while(!s.empty())
    {
     rev +=s.top();
     s.pop();
    }
    
    if(rev == word)
    {
        cout<<"The word is a palindrome :"<<endl;
        
    }
    else 
    {
        cout<<"It is not a palindrome :"<<endl;
    }
    
	showtrack(s);
	
	return 0;
}
