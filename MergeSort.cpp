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


void mergeSort(int arr[],int low, int mid, int high){

	int i = low;
	int j = mid+1;
	int k = low;
	vector<int>temp(100);
	while(i<=mid && j<=high){
		if(arr[i]<=arr[j]){
			temp[k++] = arr[i++];
		}else{
			temp[k++] = arr[j++];
		}
	}
	while(i<=mid){
		temp[k++] = arr[i++];
	}
	while(j<=high){
		temp[k++] = arr[j++];
	}
	for(int wow = low;wow<=high;wow++){
		arr[wow] = temp[wow];
	}
}

void merge(int arr[],int low,int high){
	if(low>=high){
		return;
	}
	int mid = (low + high)/2;
	merge(arr,low,mid);
	merge(arr,mid+1,high);
	mergeSort(arr,low,mid,high);
}
void solve() {

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	merge(arr,0,n-1);
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
	sieve();
	ll T;
	cin >> T;
	while (T--) {
		solve();

	}
	return 0;
}