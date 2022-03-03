

#include <bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left,*right;
};

Node* newNode(int key){
    Node* node = new Node ;
    node->key=key;
    node->left=node->right=NULL;
    return node;
}
void getVerticalOrder(Node* root , int h_dis ,map<int,vector<int>> &m  ){
    if( root==NULL) return ;
    m[h_dis].push_back(root->key);
    getVerticalOrder(root->left,h_dis-1,m);
    getVerticalOrder(root->right,h_dis+1,m);
}
int main()
{
    Node *root = newNode(10);
    root->left=newNode(7);
    root->right = newNode(4);
    root->left->left=newNode(3);
    root->left->right = newNode(11);
    root->right->left=newNode(14);
    root->right->right=newNode(6);
    
    map<int,vector<int>> m;
    int h_dis =0;
    getVerticalOrder(root,h_dis,m);
    map<int,vector<int>> :: iterator i;
    for(i=m.begin();i!=m.end();i++){
        for(int j=0;j<(i->second).size();j++){
            cout<<(i->second)[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
