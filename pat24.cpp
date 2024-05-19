/*
    5
    1
   121
  12321
 1234321
123454321
*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    int val =1; 
    while(row<=n){
        int sp=n;
        while(sp>row){
            cout<<" ";
            sp--;
        }
        int col =1;
        while(col<=row){
            cout<<col;
            col++;
        }
        int val=row-1;
        while(val>0){
            cout<<val--;
            
        }

        cout<<endl;
        row++;
    }
}