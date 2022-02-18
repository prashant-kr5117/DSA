#include <iostream>

using namespace std;

void di(int n){
    if(n==0) return ; //base condition where resursion stops 
    cout<<n;  //  To print in decreasing order
    di(n-1);  //recursion
    cout<<n;  //  to print in increasing order
}
int main()
{
    int n=10;
    di(n);  //  calling function
    return 0;
}
