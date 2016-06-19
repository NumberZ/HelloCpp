#include<iostream> 
using namespace std;
int main(){
int arr[2][2]={{9,8},{7,6}};
int *p=arr[0] + 1; cout<<*p<<endl;
return 0; 
}