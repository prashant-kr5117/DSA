#include<bits/stdc++.h> 
using namespace std;

int main(){
    vector<int> v= {2,3,45,5,5};

vector<int> :: iterator it= v.begin();
//vector<int> is type of iterator 
//:: iterator  is syntax for it
// it  iterator name
// v.begin() means it points to starting of iterator.

cout<<*it; // * is used is used like a pointer here and if have know the concept of pointers. and it will print 2
cout<<*(it+1);  // it will point to 3

cout<<endl;
// for traversing through iterator
for(it = v.begin();it!=v.end();++it){
    cout<<*it<<endl;
}

// it++ -> move to next iteartor
//it+1 -> move to next location ihis is equal to i++ in case of vector and array because  they are continuous but in terms of sets and maps it differs  
//it++ also useful in case of maps ans sets

vector<pair<int,int>> v_p={{1,2},{2,3},{3,4},{4,5}};
vector<pair<int,int>> ::iterator vip;
for(vip=v_p.begin();vip!=v_p.end();++vip){
cout<<(*vip).first<<" "<<(*vip).second<<endl;

for(int val:v){ // range based loop 
    cout<<val<<" ";
}
//in above code val contains only the copy of the value not the actual one  to so we can use &val with the help of references.
// for pair we can use for(pair<int,int> value :v)

//vector<pair<int,int>> v_p we can use auto in place of it like auto v_p 
//this auto keyword is introduced in new veresion on c++ which automatically asume the data type.
cout<<endl;
}


    return 0;
}