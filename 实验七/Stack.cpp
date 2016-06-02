#include "Stack.h"

template <typename T>
Stack<T>::Stack(){
    size = 0;
}

template <typename T>
bool Stack<T>::empty(){
    return (size == 0);
}

template <typename T>
int Stack<T>::getSize(){
    return size;
}

template <typename T>
T Stack<T>::peek(){
    return elements[size-1];
}

template <typename T>
T Stack<T>::pop(){
    return elements[--size];
}

template <typename T>
void Stack<T>::push(T _value){
    elements[size++] = _value;
}
