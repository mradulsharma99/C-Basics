#include<iostream>
using namespace std;
int main() {
    int arr[12];
    int total = 0;
    
    for(int i = 0; i <= 11; i++) {

        cout <<  "enter value :";
        cin >> arr[i];
        cout << i << endl;
        total = total + arr[i];
    }

    cout << "total :" << total;

    float avg = total/12;

    cout << "average of one year :"<< avg;

    return 0;
}