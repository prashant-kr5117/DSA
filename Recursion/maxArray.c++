#include <iostream> 
using namespace std;

int maxArray(int arr[],int n,int i){
    if(i==n-1) return arr[i];
   int maxi = maxArray(arr,n,i+1);
    return (arr[i]>mias)? arr[i]:mias;
}

int main(){
    int n,num ;
    cout<<"enter size";
    cin >>n;
   
 int arr[n];
 for(int i=0;i<n;i++){
 cin>>arr[i];
 }
 
cout<<maxArray(arr,n,0);
    return 0;
}
