string Solution::countAndSay(int A) {
	string s;
    if(A == 0){
        return "";
    }
    s = "1";
    
    if(A == 1){
    	return s;
    }
    s = "11";
                      // 1 11 21 1211 111221
      
    if(A == 2){
    	return s;
    }
    
    string prev = s;

    int freq = 1;
    
    for(int i=3;i<=A;i++){
    	string curr;
    	freq = 1;
    	for(int j = 0;j<prev.length()-1;j++){
    		
    		if(prev[j]!=prev[j+1]){
    			
    			
    			
            	stringstream ss;
            	ss << freq;
            	string str = ss.str();
            	curr = curr+str+prev[j];
                freq = 1;
                
                if(j == prev.length()-2){
                    stringstream ss;
                	ss << freq;
                	string str = ss.str();
                	curr = curr+str+prev[j+1];
                }
    			
    			
    			
    		}
    		else{
    			
    			freq++;
    			if(j == prev.length()-2){
    				stringstream ss;
            	    ss << freq;
            	    string str = ss.str();
    				curr = curr + str+prev[j];
    			}
    		}
    	}
    	
    	prev = curr;
    }
    
    return prev;
    
}
