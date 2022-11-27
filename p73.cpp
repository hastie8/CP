#include <iostream>

using namespace std;

 main() {
 	
 	int n,i,d;
 	
 	cout << " please enter a number: ";
 	cin >> n;
 	d=0;
 	
 	for( i=1; i<=n; i++ ){
 		
 		if( n%i==0 ){
 			
 			d=d+i;
		 }
	 }
 	
 	cout << "divisor is:" << d << "\n";

}
