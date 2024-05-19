/*
example-1
    3
    1 2 3
    1 2 3
    1 2 3

example-2
    5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
*/

#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    int j=1;
    cin>>n;
    while(i<=n){  
        int count = 1;  
       while (count<=n){
        cout<<count<<" ";
        count++;
       // j=j+1;
       }
       cout<<endl;
       i=i+1;
    }
    
}