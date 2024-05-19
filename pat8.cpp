/*
    Example-1
        5
        1
        2 1
        3 2 1
        4 3 2 1
        5 4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    cin>>n;
    while(i<=n){
       
      int count = i;  
     while (count>=1){
            cout<<count<<" ";
            count--;
          
        }
        
  /*  
   int count =1;
  while (count<=i)
       {
        cout<<i-count+1<<" ";
        count++;
       }
    */
        cout<<endl;
        i++;
        
    }
}