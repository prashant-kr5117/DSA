#include <iostream> 
using namespace std;

int findNum(int arr[],int n,int i,int num){
    if(i==0) return -1;
    if(arr[i]==num) return i;
    return findNum(arr,n,i-1,num);
 
}

int main(){
    int n,num ;
    cout<<"enter size";
    cin >>n;
   cout <<"num";
   cin>>num;
 int arr[n];
 for(int i=0;i<n;i++){
 cin>>arr[i];
 }
 
cout<<findNum(arr,n,n,num);
    return 0;
}
