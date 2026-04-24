#include<iostream>
using namespace std;
int max(int arr[],int idx){
    if(idx==5) return arr[idx];
    return max(arr[idx], max(arr,idx+1));
}
int main(){
    int arr[]={9,3,6,21,8,7};
    cout << max(arr,0);
    return 0;
}