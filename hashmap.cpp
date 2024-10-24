#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map<string , int> m ; // Creation
    // Insertion
    //1
    pair<string, int> p = make_pair("manu" , 5);
    m.insert(p);

    //2
    pair<string, int> q("love", 2);
    m.insert(q);

    //3
    m["mera"] = 2;


    cout << m.at("manu") << endl;
    cout << "Size :" << m.size() << endl;






    // to check if the key is present or not count is uesd
    cout << m.count("love")<< endl;            // if present ==> output = 1 😜 if absent ==> output = 0😜
    


    m.erase("love");
    cout<< "size after erase :" << m.size() << endl;


    // Iterator
    unordered_map<string , int> :: iterator it = m.begin();   // 💕💕

    while( it != m.end() ) {                                  // 💕💕
        cout << it->first << " " << it ->second << endl;      // 💕💕
        it++;                                                 // 💕💕
    }
    

    // return 0; //giving output even without retuning in main fun ?


}
