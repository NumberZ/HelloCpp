#include <iostream>
#include "Stack.h"
#include "Stack.cpp"
using namespace std;
template<typename T>
void printStack(Stack<T> _stack){
    while(!_stack.empty()){
        cout<<_stack.pop()<<"  ";
    }
    cout<<endl;
}

template<typename T>
bool contains(Stack<T> _stack, T _element){
    while(!_stack.empty()){
        if(_stack.pop() == _element){
            return true;
        }
    }
    return false;
}

int main(){
    Stack<double> stack;
    stack.push(0.1);
    stack.push(0.2);
    stack.push(0.6);
    stack.push(0.5);

    printStack(stack);
    std::cout << contains(stack,0.1) << std::endl;
    return 0;
}
