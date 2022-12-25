#include <iostream>

using namespace std;

int tavan(int x, int y){
    
    int t=1;
    
    for (int i=1; i<=y ;i++){
        
        t=t*x;
    
    }
    
    return t;
    
}

int main (){
    
    int n,m;
    
    cin>>n;
    cin>>m;
    cout<< tavan(n,m);
}
