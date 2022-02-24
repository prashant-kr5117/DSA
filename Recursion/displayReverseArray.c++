#include <iostream> 
using namespace std;

void displayReverse(int arr[],int n,int i){
   
    if(i==n) return;
displayReverse(arr,n,i+1);
cout<<arr[i]<<" ";
}
int main(){
    int n ;
    cin >>n;
 int arr[n];
 for(int i=0;i<n;i++){
 cin>>arr[i];
 }
displayReverse(arr,n,0);
    return 0;
}
