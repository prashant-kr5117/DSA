#include <iostream> 
using namespace std;

void findIndexes(int arr[],int n,int i,int num){
    if(i==n) return ;
    if(arr[i]==num) cout<< i<<" ";
     findIndexes(arr,n,i+1,num);
 
}

int main(){
    int n,num ;
    cout<<"enter size : ";
    cin >>n;
   cout <<"num : ";
   cin>>num;
 int arr[n];
 for(int i=0;i<n;i++){
 cin>>arr[i];
 }
 
findIndexes(arr,n,0,num);
    return 0;
}
