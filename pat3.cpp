/*
Example-1
    3
    111
    222
    333
Example-2
    5
    11111
    22222
    33333
    44444
    55555
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
        cout<<i;
        j=j+1;
       }
       cout<<endl;
       i=i+1;
    }
    
}