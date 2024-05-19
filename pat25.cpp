/*
Example-1
   5
1234554321
1234**4321
123****321
12******21
1********1


*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while (col<=n-row+1)
        {
            cout<<col;
            col++;
        }
        int st=1;

        while(st<row){
            cout<<"**";
            st++;
        }        
        int val=n-row+1;
        while (val>=1){
            cout<<val--;
        }
        cout<<endl;
        row++;      
    }
}