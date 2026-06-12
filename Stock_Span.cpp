#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++){
	    cin>>v[i];
	}
	vector<int> ans(n,1);
	for(int i = 1; i<n; i++){
	    int span = 1;
	    for(int j = i-1; j>=0; j--){
	        if(v[i]>v[j]){
	            span++;
	        }
	    }
	    ans[i] = span;
	}
	
	for(int i=0; i<n; i++){
	    cout<<ans[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
	

}
