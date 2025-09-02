#include<iostream>
using namespace std;

// recursion inlcludes calling a function within a function till a base condition is reached
// when a function is called it makes a place for itself in the memory and that memory is not 
// wiped till it is executed or a base condition is reached

// How does all this works in reality
// when the function is called it is pushed in a stack and the recursion are repeatedly pushed in a stack 
// upon reaching a base condition the functions are popped till stack is cleared
// if the base condition is not there the ram and stack will be overloaded


void hello(){
    int count=0;
    if (count==3) return;
    count++;
    cout<<"Hello"<<endl;
    hello();
}

int main(){
    cout<<"Recursion starts"<<endl;
    
    hello();
    cout<<"Recursion ends"<<endl;
    return 0;
}


