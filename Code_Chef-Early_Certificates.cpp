#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string a,b;
	    cin>>a>>b;
	    int low = min(n,m);
	    string str;
	    for(int i=0; i<low; i++){
	        if(a[i] == b[i]){
	            str+=a[i];
	        }
	        else{
	            break;
	        }
	    }
	    
	    cout<<str<<endl;
	}
	
	return 0;

}
