/*
   5
A
B C
C D E
D E F G
E F G H I
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     int row =1;
     
     while(row<=n){
        int col =1;
        while(col<=row){
           char ch='A'+col+row-2;
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
     }
   
}