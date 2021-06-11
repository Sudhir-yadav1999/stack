---------------------------
Implement stack using array
---------------------------

#include <bits/stdc++.h>
using namespace std;

class Stack
{
    public:
        int top=-1;
        int size;
        int stack[100];
       
        
    void push(int element,int size)
    {
        
        if(top == size-1)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            stack[top]=element;
            
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow :"<<endl;
        }
        else
        {
         cout<<stack[top]<<" is deleted from stack :";
         top--;
        }
        
    }
    void display()
    {
        if(top!=-1)
        {
           for(int i=top;i>=0;i--)
           {
               cout<<stack[i]<<endl;
           }
        }
        else
        {
            cout<<"Stack is empty :"<<endl;
        }
    }
        
};

int main()
{
	Stack s1;
	int element;
	int size;
	int ch;
	cout<<":::::::::::::STACK::::::::::::::"<<endl;
	cout<<"Enter the size of stack:"<<endl;
	cin>>size;
	do
	{
	    cout<<":::1.Push  :::2.pop :::3.display "<<endl;
	    
	  cin>>ch;
	  switch(ch)
	  {
	      
	      case 1:
	            
	            cout<<"Enter the element :"<<endl;
	            cin>>element;
	            s1.push(element,size);
	            break;
	      case 2:
	           s1.pop();
	           break;
	      
	      case 3:
	            s1.display();
	            break;
	      case 4:
	           cout<<"Exit";
	           return 0;
	           break;
	      default:
	            cout<<"Wrong choice ::"<<endl;
	  }
	}while(ch != 4);

	return 0;
}
