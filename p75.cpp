#include <iostream>

using namespace std;

 main() {
 	
 	int n,m,s,d;
 	
 	cout << " please enter a positive number: ";
 	cin >> m;
 	d=0;
 	
 	for(n=2; n<=m; n++){
 		
 		for(s=2; s<=(n/2); s++){
 			
 			if(n%s==0){
 				
 				s=n;
 				
 				break;
				 
				 }
		     }
	    if(s!=n){
	    	
	    	d=d+n;
		}    
	    }
	    d=d+2;
	    cout << " result: " << d;
 	

}
