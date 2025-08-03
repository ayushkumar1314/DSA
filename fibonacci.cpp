#include <bits/stdc++.h>
using namespace std;
int fibn(int n){
    if(n==0|| n==1){
    //here the base case fails as we don't know fibn of -1 nor -2
    return n;}
    return fibn(n-1)+fibn(n-2);//fact(n-1)will be solved by friend
}
int main() {
int n;
cin>>n;
cout<<fibn(n);
}
