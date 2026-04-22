// print nth fibonacci
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1) return n;
    else return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cout<<"Enter the nth term to print: ";
    cin>>n;
    cout<<"The " << n << "th fibonaci term is: " << fib(n);
    return 0;
}