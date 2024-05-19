/*

    5
*****
 ****
  ***
   **
    *

*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=n,sp=1;
        while(sp<row){
            cout<<" ";
            sp++;
        }
        while(col>=row){
            cout<<"*";
            col--;
        }
        
        cout<<endl;
        row++;
    }
}