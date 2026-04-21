#include<iostream>
using namespace std;
int pow(int a, int b){ // time complexity: O(logb)
    if(b==0) return 1;
    int half = pow(a,b/2);
    if(b%2==0) return half*half;
    else return a*half*half;
    
}
int main(){
    int a,b;
    cout<< "Enter the value of a and b to find power of a^b"<<endl;
    cin>>a>>b;
    cout<<"power of a^b = "<< pow(a,b);
    return 0;
}