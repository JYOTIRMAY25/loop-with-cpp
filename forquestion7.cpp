//Calculate and print the factorial of every number from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for(int i= 1; i <= n; i++){
        int faactorial = 1;
        for(int j = 1; j <= i; j++){
            faactorial *= j;
        }
        cout<<"factorial of "<<i<<" is "<<faactorial<<endl;
    }
}
