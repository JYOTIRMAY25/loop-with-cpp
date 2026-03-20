// Calculate and print the factorial of a given number.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    
    cout<<"factorial of "<<num<<" is "<<factorial<<endl;
}
