/*
 
user: Atul Bahuguna
 
*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define rep(i,st,en) for(ll i=st;i<en;i++)
#define F first
#define S second
#define vi vector<ll>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;


/*******************************Main function Program*******************/

void InsertionSort(int arr[],int n){
	
	for(int i=0;i<n;i++){
		int j = i;
		while(j>0 && arr[j-1]>arr[j]){
			swap(arr[j-1],arr[j]);
			j--;
		}
	}
}

void solve() {

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	InsertionSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE

	ios::sync_with_stdio(false); cin.tie(NULL);
	// sieve();
	ll T;
	cin >> T;
	while (T--) {
		solve();

	}
	return 0;
}