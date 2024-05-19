/*
example-1
    3
    123
    123
    123

example-2
    5
    12345
    12345
    12345
*/


#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
       while (j<=n){
        cout<<j;
        j=j+1;
       }
       cout<<endl;
       i=i+1;
    }
    
}