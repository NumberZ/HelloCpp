#include <iostream>
#include "StackOfIntegers.h"
#include "StackOfIntegers.cpp"
#include "EmptyStackException.h"
#include "EmptyStackException.cpp"
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    StackOfIntegers stack;
    for(int i = 0; i < 10; i++){
        stack.push(i);
    }
    while(n!=0){
        stack.pop();
        n--;
    }
    try{
        std::cout << stack.pop() << std::endl;
    }
    catch(EmptyStackException e){
        e.content();
    }
    return 0;
}
