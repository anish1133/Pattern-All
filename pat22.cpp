/*
  5
12345
 2345
  345
   45
    5
    
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
 
    while(row<=n){
      int col = n;
      int val =row;
      int sp=1;
      while (sp<row)
      {
        cout<<" ";
        sp++;
      }
      
      while(col>=row){
        cout<<val++;
        col--;
      }
        cout<<endl;
        row++;
    }
}