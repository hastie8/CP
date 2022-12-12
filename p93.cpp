#include <iostream>

using namespace std;

 main(){
 	
 	int G[10];
 	G[0]=0;
	G[1]=1;
	int r;
	
	for(r=2; r<10; r++){
		
		G[r]=G[r-1]+G[r-2];
	}
	
	for(r=0; r<10; r++){
		
		cout << " " <<G[r];
	}
	
}
