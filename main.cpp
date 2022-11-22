#include <iostream>
using namespace std;

int main() {
   int n=0, a=1, b=0, c=1;
    cin>>n;
    if (n>=2) for (int i=0; i<(n/3); i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=c+b;
        cout<<a<<endl;
        b=a+c;
        cout<<b<<endl;
    }
   return 0;
}
