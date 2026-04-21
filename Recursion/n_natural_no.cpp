// print n natural no. in non increasing order and increasing order recursively
#include<iostream>
using namespace std;
void num_decr(int a){
    if(a==0){
        return;
    }
    cout << a <<" ";
    num_decr(a-1); // first print then decrement it means decreasing order
    return;
}
void num_incr(int a){
    if(a==0){
        return;
    }
    num_incr(a-1); // first decrement then print means increasing order
    cout << a <<" ";
    return;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin>> n;
    cout << "Decreasing Order: ";
    num_decr(n);
        cout << endl << "increasing order: ";
    num_incr(n);
    return 0;
}
