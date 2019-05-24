#include <iostream>
#include <cstdlib>

using namespace std;

int stack[100], index;  //global variable

void push(int x) //Inserts value to the Stack
{
  index++; //increments the index;
  stack[index]=x; //sets the index of the array of the stakc to x;
  
  
}

void pop() //deletes the last element added
{
  stack[index] = 0; // sets the index of the array in the stack to 0
  index--; //decrements the index

}

bool empty() //checks to see if stack is empty
{
  if (index >= 1){
    return false;
  }else{
    return true;
  }
}

int top() // returns the top of the stack
{
  return stack[index];
}

int main()
{
  push(5);
  push(4);
  pop();
  pop();
  push(10);
  push(7);

  if (!empty()) cout << top() << endl; //if stack is empty, program will not look for value
}
