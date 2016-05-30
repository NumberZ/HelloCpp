#include "StackOfIntegers.h"
#include "EmptyStackException.h"

StackOfIntegers::StackOfIntegers(){
    size = 0;
}

bool StackOfIntegers::empty(){
    return (size == 0);
}

int StackOfIntegers::getSize(){
    return size;
}

int StackOfIntegers::peek(){
    return elements[size-1];
}
int StackOfIntegers::push(int value){
    return elements[size++] = value;
}
int StackOfIntegers::pop(){
    if(this->empty()){
        throw EmptyStackException();
    }
    return elements[--size];
}
