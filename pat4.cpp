/*
    Example-1
        3
        *
        * * 
        * * *
    Example-2
        5
        *
        * * 
        * * *
        * * * *
        * * * * *

*/

#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){  
        int count = 1;  
       while (count<=i){
        cout<<"*"<<" ";
        count++;
       }
       cout<<endl;
       i=i+1;
    }
    
}