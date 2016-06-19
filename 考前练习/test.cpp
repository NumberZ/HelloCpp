#include <iostream>
using namespace std;
class Test {
    public:
        Test(){}
        Test(const Test& t){cout<<1;}
};
 Test fun(Test &u){
     Test t = u;
     return t;
 }

 int main(){
     Test x,y;
     x=fun(y);
     return 0;
 }