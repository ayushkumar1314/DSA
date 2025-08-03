#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0)//here the base case fails as we don't know fact of -1
    return 1;
    return n*fact(n-1);//fact(n-1)will be solved by friend
}
int main() {
int n;
cin>>n;
cout<<fact(n);
}
