/*

5
    *
   **
  ***
 ****
*****

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
     
    while(row<=n){
       int sp = n-row;
        int col=1;
        while(sp>0){
            cout<<" ";
            sp--;
        }
        while(col<=row){
            
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}