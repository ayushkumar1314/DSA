//find pow(x,y)
#include <bits/stdc++.h>
using namespace std;
int power(int x,int y){
if(y==0)
return 1;
if(y%2==0){
    int a=power(x,y/2);
    return a*a;
}
else{
    int a=power(x,y/2);
    return a*a*x;
}
    
}
int main() {
int x,y;
cin>>x>>y;
cout<<power(x,y);
}
