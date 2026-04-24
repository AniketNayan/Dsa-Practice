#include<iostream>
using namespace std;
int SumofArray(int arr[],int idx){
    if(idx==2) return arr[idx];
    return (arr[idx]+SumofArray(arr,idx+1));
}
int main(){
    int arr[]={9,3,6};
    cout << SumofArray(arr,0);
    return 0;
}