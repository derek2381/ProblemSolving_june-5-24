// problem link
// https://www.codechef.com/START137D/problems/CMIX

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n][2];

	    for(int i = 0; i <n;i++){
	        cin >> arr[i][0] >> arr[i][1];
	    }

	    long int max = 0;

	    for(int i = 0; i <n;i++){
	        int val = 0;

	        for(int j = i+1;j < n;j++){
	            val = arr[i][0] * arr[j][1];
	            val += arr[i][1] * arr[j][0];

	            if(val > max){
	                max = val;
	            }
	        }
	    }


	    cout << max << endl;
	}

}
