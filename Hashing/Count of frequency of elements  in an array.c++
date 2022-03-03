// Count of frequency of elements  in an array

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
  int m[n];
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    map<int,int> mp;
    map<int,int>:: iterator it;
    for(int i=0;i<n;i++){
        mp[m[i]]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second;
        cout<<endl;
    }
    
    return 0;
}
