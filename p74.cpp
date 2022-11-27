#include <iostream>

using namespace std;

 main() {
 	
 	int m,n,s,bmm;
 	cout << " please etnter first integer value: ";
 	cin >> m;
	
	cout << " please enter second integer value; ";
	cin >> n;
	s=1;
	
	while(s<=m){
		
		while(s<=n){
			
			s++;
			
			if(m%s==0 && n%s==0){
			 
				bmm=s;
			}
		}
	}
	
	cout << " bmm between: " << m << " " << "and" << n << "is" << bmm;

}
