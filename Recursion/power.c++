
#include <iostream>

using namespace std;
int power(int x,int n){
    if(n==1) return x;
    if (n==0) return 1;
    if(x==1) return 1;
    int po= power(x,n-1);
    return po*x;
}
int main()
{
    int x,n;
    cin>>x>>n;
   cout<< power(x,n);

    return 0;
}
