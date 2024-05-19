/*
    5
    A B C D E
    B C D E F
    C D E F G
    D E F G H 
    E F G H I
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    /*
    int row=1;
    while(row<=n){
        char ch='A'+row-1;
        int col=1;
        while(col<=n){
            cout<<ch<<" ";
            col++;
            ch++;
        }
        cout<<endl;
        row++;
    }
    */

   int row=1;
   while (row<=n){
    int col =1;
    while(col<=n){
        char ch = 'A'+row+col-2;
        cout<<ch<<" ";
        col++;
    }
    cout<<"\n";
    row++;
   }
   
}