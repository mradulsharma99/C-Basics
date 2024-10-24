#include<iostream>
using namespace std;
int main(){
    int cent, dollar , penny , dimes , nickels , quarters;
    cout<<"Enter a amount in cent : ";
    cin>>cent;
    cout<<endl<<endl;

    int a , b , c , d , e;
    a = cent%100;
    // cout<<a<<endl;
    dollar = cent / 100;
    cout<<"value of dollars is : "<<dollar<<endl;
    
    b = a%25;
    quarters = a / 25;
    cout<<"Value in quarters : "<<quarters<<endl;

    c = b%10;
    dimes = b / 10;
    cout<<"value in dimes : "<<dimes<<endl;

    d = c%5;
    nickels = c / 5;
    cout<<"Value in nickels : "<<nickels<<endl;

    e = d%1;
    penny = d;
    cout<<"Value in pennyies :"<<penny<<endl;
    


    return 0;



}