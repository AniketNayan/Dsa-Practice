//Print the whole array recurisively
#include<iostream>
using namespace std;
void printArr(int arr[], int i){
    if (i>=5) return;
    cout<< arr[i]<< " ";
    printArr(arr,i+1);
}
int main(){
    int arr[5]={1};
    printArr(arr,0);
    return 0;
}