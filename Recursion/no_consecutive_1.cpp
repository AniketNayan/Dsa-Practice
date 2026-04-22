// given a number x, calculate the count of number of binary strings of length x which has no consecutive 1's
#include<iostream>
using namespace std;
int count(int num){
    if(num==1||num==2) return num+1;
    else return count(num-1)+count(num-2);

}
int main(){
    int n;
    cout<<"Enter the number or length of string: ";
    cin>>n;
    cout<<count(n);
    return 0;
}