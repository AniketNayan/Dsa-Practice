#include<iostream>
using namespace std;
void pattern(int row , int col, int n){
    if(row > n) return; // all rows are printed
    if(col > n) { // everything is printed in curr row
        cout<< endl; // newline before going to next row
        pattern(row + 1, 1, n); // all col of given row are done, move to next row
        return;
    }
    cout << "*";
    pattern(row, col+1, n); // move to the next col
}
int main(){
    pattern(1,1,5);
    return 0;
}