/*
    Example-1
        3
        1
        2 3 
        4 5 6
    Example-2
        5
        1 
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    cin>>n;
    int j=1;
    while(i<=n){
        int count =1;
        while (count<=i){
            cout<<j<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
}