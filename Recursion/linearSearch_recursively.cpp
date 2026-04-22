//Given an array & an element X,find the index where the first occurence of X is? return -1 if there is no occurence
#include<iostream>
using namespace std;
int linearSearch(int arr[],int i,int k) {
    if(i>= 7) return -1;
    return (k==arr[i])?i:linearSearch(arr,i+1,7);

}
int main(){
    int arr[7]={1,9,5,7,3,7,4};
    cout<< linearSearch(arr,0,7);
    return 0;
}