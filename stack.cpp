#include <iostream>
#include <cstdio>
#include <cstdlib>
int n;									//global varibale
class Stack
{
private:
  int *arr = new int[n];  						// dynamically initialize array of size n  to store the stack
	int top;   							// variable indicates top of the stack . 
public:
									// constructor
	Stack()
	{
		top = -1; 						// for empty array, set top = -1
	}

									// Push operation to insert an element on top of stack. 
	
	void Push(int x) 
	{
	  if(top == n-1) 						//overflow condition
		{ 
		printf("Error: stack overflow\n");
		Display();
		exit(-1);//return;		
		}
	arr[++top] = x;
	}
 
									// Pop operation to remove an element from top of stack.
	
	void Pop() 
	{
		if(top == -1) 
			{ 						// If stack is empty, pop should throw error. 
			printf("Error: No element to pop\n");
			exit(-1);//return;
			}
		top--;
	}
 
									// This function will return 1 (true) if stack is empty, 0 (false) otherwise
	int IsEmpty()
	{
		if(top == -1) return 1;
		return 0;
	}

									// ONLY FOR TESTING - NOT A VALID OPERATION WITH STACK 
									// This function is just to test the implementation of stack. 
									// This will print all the elements in the stack at any stage. 
	void Display() {
		int i;
		printf("Stack: ");
		for(i = 0;i<=top;i++)
			printf("%d ",arr[i]);
		printf("\n");
	}
~Stack()                                                             //Destructor called to free the dynamically allocated memory of array.
{
delete [] arr;
}
};

int main()
{
std::cout << "Enter size of Array"<<std::endl;
std::cin >> n;

Stack st;
int ch;
 while(1)
        {
             std::cout <<"\n1.push  2.pop  3.display  4.exit\nEnter ur choice"<<std::endl;
             std::cin >> ch;
             switch(ch)
              {
               case 1:  std::cout <<"enter the element"<<std::endl;
                        std::cin >> ch;
                        st.Push(ch);
                        break;
               case 2:  st.Pop();  break;
               case 3:  st.Display();break;
               case 4:  exit(0);					//#include <cstdlib>
               }
         }
return (0);


}

