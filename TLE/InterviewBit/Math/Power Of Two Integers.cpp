#include <bits/stdc++.h>
using namespace std;
double Log( double n , int A)  
{  
    return log(n) / log(A);  
}  

int isPower(int x) {
    if(x == 1){
        return 1;
    }
    double P = INT_MAX;
    for(int A=2; P > 1 ; A++){
        P = Log(x,A);
        if(P == floor(P) && P>1){
            return 1;
        }
    }
    return 0;
    
}

int main(){
	int t;
	cin>>t;
	cout<<isPower(t);
	
	
}
