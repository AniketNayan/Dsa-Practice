#include<iostream>
using namespace std;
int sumofdigits(int n){
    if(n<=9) return n;
    else return (sumofdigits(n/10) + n%10);
}
int main(){
    cout << sumofdigits(1234);
    return 0;
}