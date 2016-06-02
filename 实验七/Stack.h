#ifndef Stack_H_H
#define Stack_H_H

template <typename T> class Stack{
    public:
        Stack();
        bool empty();
        T peek();
        T pop();
        int getSize();
        void push(T _value);
    private:
        T elements[100];
        int size;
};
#endif
