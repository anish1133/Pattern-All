/*
    5
    A A A A A
    B B B B B
    C C C C C
    D D D D D
    E E E E E
*/

#include <iostream>
using namespace std;

int main()
{
    char i = 1;
    int n;
   
//    int ch = 65;
    cin >> n;
    while (i <= n)
    {
/*
        int count = 1;
        while (count <= n)
        { char cch=ch;
            cout << cch << " ";
            count++;
        }
        ch++;
        cout << endl;
        i = i + 1;
    }
*/    
    int j = 1;
    while (j<=n)
    {
       char ch = 'A'+i-1;
       cout<<ch<<" ";
       j++;
    }
    cout<<"\n";
    i++; 
}
}