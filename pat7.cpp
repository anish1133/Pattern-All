/*
    Example-1
        3
        1
        2 3
        3 4 5
    Example-2
        5
        1
        2 3 
        3 4 5
        4 5 6 7
        5 6 7 8 9
*/

#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cin>>n;
    
    while(i<=n){  
        int count = 1,val=i;  
       while (count<=i){
        cout<<val++<<" ";  //i+count-1  another solution
        count++;
       }
       i++;
       cout<<endl;
      
    }
    
}