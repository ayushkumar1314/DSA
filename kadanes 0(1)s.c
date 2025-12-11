#include <bits/stdc++.h>
using namespace std;
int maxsubsum(int arr[],int n){
    int x;//x contains maximum sum of subarray ending at index i-1
    x=arr[0];
    int largest=arr[0];
    for(int i=1;i<n;i++){
        x=max(arr[i],arr[i]+x);
        largest=max(largest,x);
    }
    return largest;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<maxsubsum(arr,n);

}
