//given a positive number n print number from n to 1 in decreasing order
#include <bits/stdc++.h>
using namespace std;
void printdecreasing(int n){
    if(n==0)//base case
    {return;}
    cout<<n<<endl;
    printdecreasing(n-1);
    
}
int main() {
int n;
cin>>n;
printdecreasing(n);
}
