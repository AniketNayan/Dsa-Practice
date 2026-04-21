#include<iostream>
using namespace std;
int pow(int a, int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
    
}
int main(){
    int a,b;
    cout<< "Enter the value of a and b to find power of a^b"<<endl;
    cin>>a>>b;
    cout<<"power of a^b = "<< pow(a,b);
    return 0;
}