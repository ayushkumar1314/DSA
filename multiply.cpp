#include <bits/stdc++.h>
using namespace std;
int multiply(int n,int m){
    if(m==0)//base case
    return 0;
    return n+multiply(n,m-1);//friend will multiply n m-1times
}
int main() {
int n,m;
cin>>n>>m;
cout<<multiply(n,m);
}
