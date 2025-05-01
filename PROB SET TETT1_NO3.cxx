#include <iostream>
#include <string>

using namespace std;
int main(){
    string A,C;
    cout<<"Enter Name:";
    cin>>A;
    cout<<"Enter Pass:";
    cin>>C;
    
    if (A=="ENGINEER"&&C=="PASS"){
        float F,L,M,N;
        
        cout<<"Enter Number:";
        cin>>F;
        
        cout<<"Enter Number:";
        cin>>L;
        
        cout<<"Enter Number:";
        cin>>M;
        
        cout<<"Enter Number:";
        cin>>N;
        
        cout<<F*L/M+N;
    }
    return 0;
}