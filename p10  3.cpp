#include <iostream>

using namespace std;

int bmm(int x,int y){

    if (y==0){
        
        return x;
        
    }

    else{
        
        return (x%y);
        
    
    }

}

int main(){
    
    int a,b;
    
    cin>>a>>b;
    
    cout << bmm(a,b);
    
    
}

 

 
