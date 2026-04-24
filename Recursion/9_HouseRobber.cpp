#include<bits/stdc++.h>
using namespace std;
int max_profit(int arr[], int idx){
    if (idx>= 4) return 0;
    return max(arr[idx]+max_profit(arr,idx+2), max_profit(arr,idx+1));

}
int main(){
    int arr[] = {3,1,1,9};
    cout<< max_profit(arr,0);
    return 0;
}