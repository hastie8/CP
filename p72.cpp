#include <iostream>

using namespace std;

 main() {
 	
 	int m,n,d,i,s;
 	
 	cout << " please enter first number: ";
 	cin >> m;
 	
 	cout << " please enter second number: ";
 	cin >> n;
 	
 	d=0;
 	i=0;
 	
 	while (m-d>=n){
 		
 		d=d+n;
 		s=m-d;
 		i=i+1;
 		
	 }
 	
 	cout << "baqimandeh is:" << s << "\n";
 	cout << "kharej qesmat is:" << i ;
 
 	
}
