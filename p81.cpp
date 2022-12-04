#include <iostream>

using namespace std;

main() {
	
	int nums[10];
	
	int min,max,i;
	
    float s,average;
	
	for(i=0; i<10; i++){

	cin >> nums[i];
	
	}
	
	max=nums[0];
	
	for(i=0; i<10; i++){
		
		if (nums[i]>max){
	
		max=nums[i];
		
		}
		
	}
	
	min=nums[10];
	
	for (i=0; i<10; i++){
		
		if(nums[i]<min){
	
		min=nums[i];
		
		}
		
	}
	
	s= min+max;
	
	average= s/2.0;
	
	cout << "average of min and max is :" << average;
	
}
