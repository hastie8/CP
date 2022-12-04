#include <iostream>

using namespace std;

 main(){
 	
 	int num1[5];
 	int num2[5];
 	int i,t;
 	
 	for(i=0; i<5; i++){
 		
 		cin >> num1[i];
 	
    } 
	
	for(i=0; i<5; i++){
		
		cin >> num2[i];
			}
	for(i=0; i<5; i++){
		
	
	t=num1[i];
	num1[i]=num2[i];
	num2[i]=t;
}
    for(i=0; i<5; i++){
	
	cout << num2[i];	
			}
	} 
