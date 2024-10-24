#include<iostream>
using namespace std;
int main(){
    const int Small_Room_Charge{25};
    const int Big_Room_Charge{30};
    const int valid{30};
    double tax = 0.06;

    cout<<"Numer of small rooms wanted to clean: " ;
    int small_room;
    cin>>small_room;
    int big_rooms;
    cout<<"Numer of big rooms wanted to clean: ";
    cin>>big_rooms;
    
    cout<<"cost of small room cleaning is "<< Small_Room_Charge << endl;
    cout<<"cost of big room cleaning is "<<Big_Room_Charge << endl ;

    cout <<"tax per room is "<< tax << endl <<endl;

    int small, big;
    small=(small_room*Small_Room_Charge) + (small_room*Small_Room_Charge*tax);

    big=(big_rooms*Big_Room_Charge) + (big_rooms*Big_Room_Charge*tax);

    cout << "total charge for small rooms :" << small << endl;
    cout<< "total charge for big rooms :" << big << endl;
    cout<<"total charge = "<<small+big<<endl;

    cout<<"this charge is valid for "<<  valid <<" days";

    return 0;

}