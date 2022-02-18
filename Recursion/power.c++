
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

// O(n) complexity code

#include <iostream>

using namespace std;
int power(int x,int n){
    if(n==1) return x;
    if (n==0) return 1;
    if(x==1) return 1;
    int po= power(x,n/2);
    int powe=po*po;
    if(n%2==1){
        powe= powe*x;
    }
    return powe;
}
int main()
{
    int x,n;
    cin>>x>>n;
   cout<< power(x,n);

    return 0;
}
