
vector<int> make_vector(string A){
    int n = A.length();
    vector<int> v;
    string s;
    int x;
    for(int i=0;i<n;i++){
        
        s.push_back(A[i]);
        if(A[i] == '.'){
            stringstream num(s);
            num >> x; 
            v.push_back(x);
            s.clear();
  
        }
    }
    
    stringstream num(s);
    num >> x;
    if(x == 0){
        return v;
    }
    v.push_back(x);
    
    return v;
    
}

int Solution::compareVersion(string A, string B) {
    
    int n = A.length();
    int m = B.length();
    
    if(n == 0){
        return -1;
    }
    if(m == 0){
        return 1;
    }
    if(A == B){
        return 0;
    }
    
    vector<int> v1;
    vector<int> v2;
		    
    
    v1 = make_vector(A);
    v2 = make_vector(B);
    // cout<<v1[0]<<" "<<v2[0]<<endl;
    
    
    int n1 = v1.size();
    int n2 = v2.size();
    // cout<<n1<<" "<<n2<<endl;
    int i = 0,j = 0;
    if(v1 == v2){
    	return 0;
    }
    else{
    	
    	
	    while(i<n1 && j<n2){
	        
	        if(v1[i] == v2[j]){
	            
	            i++;
	            j++;
	            continue;
	        }
	        else if(v1[i] < v2[j]){
	            return -1;
	        }
	        else{
	            return 1;
	        }
	        i++;
	        j++;
	    }
    }
    
    
    if(i == n1){
    	return -1;
    }
    if(j == n2){
    	return 1;
    }
    
}
