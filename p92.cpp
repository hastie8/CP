#include <iostream>

using namespace std;

 main() {
 	
 	int F[10];
 	int MIN,g;
 	
 	cout << " PLEASE ENTER 10 NUMBERS : ";
 	
 	for(g=0; g<10; g++){
 		cin >> F[g];
 		
	 }
	 
	 MIN=F[1];
	 for(g=0; g<10; g++){
	 	if(F[g]<MIN){
	 		
	 	MIN=F[g+1];
		 }
	 }
	 
	 cout << " SECOND MINIMUM OF THIS NUMBERS IS : "<< MIN ;

}
