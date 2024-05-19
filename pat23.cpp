/*
    5
     1
    23
    456
    78910
1112131415
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    int val =1;
    while(row<=n){
      int col = 1;
      int sp=n;
      while (sp>row)
      {
        cout<<" ";
        sp--;
      }
      
      while(col<=row){
        cout<<val++;
        col++;
      }
        cout<<endl;
        row++;
    }
}