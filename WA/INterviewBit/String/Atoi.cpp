
int atoi(const string A) {
    int n = A.size();
    int x = 0;
    int flag = 0,y;
    
    for(int i=0;i<n;i++){
        
        if(A[i] != ' ' && isdigit(A[i]) == 0){
			if(A[i] == '+' || A[i] == '-'){
                if(isdigit(A[i+1]) == 1 && i < n){
                    continue;
                }
            }
            return 0;
            
        }
        
        
        if(isdigit(A[i])){
           
            if(i-1 >= 0){
                if(A[i-1] == '-'){
                    flag = 1;
                }
                if(A[i-1] == '+'){
                    flag = 0; 
                }
        
            }
            
            while(isdigit(A[i]) && i<n){
            	
                int a = x*10;
                
                int b = A[i]-'0';
                x = a + b;
            	
                i++;
            }
            x = INT_MAX;
            // if(A[i] != ' ' && i!=n){
            //     return 0;
            // }
            // if(x < 0){
            // 	y = INT_MAX;
            // 	if(flag == 1){
            // 		return INT_MIN;
            // 	}
            // 	else{
            // 		return INT_MAX;
            // 	}
            // }
            
            
            
            if(flag == 0){
                return x;
            }
            else{
            	
                return -1*x;
            }
        }
        
        
    }
    return 0;
}
