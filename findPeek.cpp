#include <bits/stdc++.h>
using namespace std;
// divde and conquer approach
int peekElement(int a[] , int start , int end){

	int mid = (start+end) /2 ;

	if(a[mid-1]<= a[mid] && a[mid] >= a[mid+1])
		return mid;

	else if(a[mid-1] > a[mid])
		return peekElement(a, start , mid-1);

	else if(a[mid+1] > a[mid])
		return peekElement(a, mid+1 , end);

}


int main(){

	int n; 
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++) 
		cin>>a[i];
	if(n==1){
		cout<<0;
		return 0;
	}

	cout<<peekElement(a,0,n-1);
	
	return 0;
}
