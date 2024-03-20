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

int Quick(int arr[],int low, int high){
	int pivot = arr[low];
	int i = low;
	int j = high;

	while(i<j){
		while(arr[i]<= pivot && i<=high-1){
			i++;
		}

		while(arr[j]>=pivot && j>=low+1){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[low], arr[j]);

	return j;

	
}

void QuickSort(int arr[],int low,int high){
	if(low>=high){
		return;
	}

	int pivotInd = Quick(arr, low, high);
	QuickSort(arr, low, pivotInd-1);
	QuickSort(arr, pivotInd+1, high);

}

void solve() {

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	// cout<<"Hello"<<endl;
	QuickSort(arr,0,n-1);
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