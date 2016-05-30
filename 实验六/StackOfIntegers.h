#ifndef StackOfIntegers_H_H
#define StackOfIntegers_H_H

class StackOfIntegers{
    public:
        StackOfIntegers();

        bool empty();
        int getSize();
        int peek();
        int push(int value);
        int pop();
     private:
        int elements[100];
        int size;
};
#endif
