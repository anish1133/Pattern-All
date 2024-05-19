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
       int sp = n-row;
        int col=n;
        while(col>=row){   
            cout<<"*";    
            col--;
        }
        while(sp>0){
            cout<<" ";
            sp--;
        }
        cout<<endl;
        row++;
    }
}