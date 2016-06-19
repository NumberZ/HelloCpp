#include <iostream>
using namespace std; class A{
public:
A(int i=0):r1(i){}
void print(){cout<<'E'<<r1<<'-';}
void print() const {cout<<'C'<<r1*r1<<'-';} void print(int x){cout<<'p'<<r1*r1*r1<<'-';}
private:
int r1;
};
int main(){
A a1;
const A a2(4); a1.print(2); a2.print(); return 0;
}
