#include <iostream>
using namespace std;

int main() {
   int n=0, a=1, b=0, c=1;
    cin>>n;
    if (n>=2)
    {for (int i=0; i<n; i++)
    {       c=a+b;
            cout<< c << endl;
            a=b;
            b=c;
    }
    }
   else {cout<<"errore"<<ednl;}
   return 0;
}
