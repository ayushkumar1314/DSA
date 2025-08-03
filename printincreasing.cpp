//given a positive number n print number from 1 to n in increasing order
#include <bits/stdc++.h>
using namespace std;
void printincreasing(int n){
    if(n==0)//base case
    {return;}
    printincreasing(n-1);
    cout<<n<<endl;
}
int main() {
int n;
cin>>n;
printincreasing(n);
}
