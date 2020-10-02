
pair<string,int> func(int sum,string s,int carry){
        if(sum == 0){
            s.push_back('0');
            carry = 0;
        }
        else if(sum == 1){
            s.push_back('1');
            carry = 0;
        }
        else if(sum == 2){
            s.push_back('0');
            carry = 1;
        }
        else if(sum == 3){
            s.push_back('1');
            carry = 1;
        }
        return {s,carry};
}

string Solution::addBinary(string A, string B) {
    int n = A.size();
    int m = B.size();
    
    if(n == 0){
        return B;
    }
    if(m == 0){
        return A;
    }
    
    int i=n-1,j=m-1;
    string s;
    int carry = 0;
    int sum;
    
    while(i>=0 && j>=0){
        
        sum = A[i]-'0' + B[j]-'0' + carry;
        s = func(sum,s,carry).first;
        carry = func(sum,s,carry).second;
        i--;
        j--;
        
    }
    
    while(i >= 0){
        if(carry == 0){
            s.push_back(A[i]);
        }
        else{
            sum = A[i]-'0' + carry;
            s = func(sum,s,carry).first;
            carry = func(sum,s,carry).second;
        }
        i--;
    }
    
    while(j >= 0){
        if(carry == 0){
            s.push_back(B[j]);
        }
        else{
            sum = B[j]-'0' + carry;
            s = func(sum,s,carry).first;
            carry = func(sum,s,carry).second;
        }
        j--;
    }
    
    if(carry != 0){
        s.push_back('1');
    }
    
    reverse(s.begin(),s.end());
    return s;
    
}
