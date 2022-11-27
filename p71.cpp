#include <iostream>

using namespace std;

 main() {
   
   int m,n,tavan;
   
   cout << " please enter  first number: ";
   cin >> m;
   
   cout << " please enter second number: ";
   cin >> n;
   
   tavan=1;
   
   while (n>0) {
   	
   	tavan=tavan*m;
   	n=n-1;
   	
   }
    cout << " tavan is:" << tavan;
     
 }
