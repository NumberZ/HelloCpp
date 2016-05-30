#ifndef EmptyStackException_H_H
#define EmptyStackException_H_H

class EmptyStackException{
    public:
        EmptyStackException() = default;
        virtual ~EmptyStackException() = default;
        void content();
};
#endif
