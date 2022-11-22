#include <iostream>
using namespace std;

int main() {
   int n=0, a=1, b=1, c=0;
    cin>>n;
    if (n<2)  {cout<<"errore"<<ednl;}
   else { int i=0;
          cout<<a<<ednl;
          cout<<b<<ednl;
          for (i=3; i<=n; i++)
          { c=a+b;
            cout<<c<<endl;
            a=b;
            b=c;
          }
        }
   return 0;
}
