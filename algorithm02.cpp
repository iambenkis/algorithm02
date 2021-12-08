#include <iostream>
using namespace std;

int main(){
int i ;
int number ;
int petit;
for (i=1;i<11;i++){
    cout<<"Enter "<<i<<"e number ";
    cin>>number;
    if(i==0)petit=number;
    else if(number<petit)petit=number;
}

cout<<petit;
}
