/*
example-1
    3
    1
    22
    333
    4444
    55555
example-2
    5
    1
    22
    333
    4444
    5555
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
        cout<<i;
        count++;
       }
       cout<<endl;
       i=i+1;
    }
    
}