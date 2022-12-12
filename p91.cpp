#include <iostream>

using namespace std;

const int m=10;

 main(){
 	
 	int B[m]={12,22,35,49,51,64,70,83,91};
 	
 	int s,d,f,h;
 	
 	cout<< " ENTER AN INTEGER VALUE : ";
 	cin >> s;
 	
 	B[9]=s;
 	
 	for(d=0; d<m; d++){
 		
		 for(f=0; f<(m-d); f++){
 			
 			if(B[f]>B[f+1]){
 				
 				h=B[f];
 				B[f]=B[f+1];
 				B[f+1]=h;
 				
			 }
		 }
	 }
	 
	 cout << " THE FINAL ARRAY IS : " <<"\n";
	 
	 for(d=0; d<m; d++){
	 	cout <<"\n" << B[d];
	 }

}
